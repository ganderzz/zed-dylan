# PRD: Zed Open Dylan Language Extension

## Goal

Create a TOML-only Zed extension for **Open Dylan** that provides:

- Syntax highlighting (via tree-sitter grammar)
- Bracket auto-close matching
- Line comment support  
- Hover, diagnostics, jump-to-definition, completion via `lsp-dylan` (the official LSP server)

---

## Confirming the TOML-only Approach

Verified against live Zed extension examples. **TOML-only extensions can configure both grammars and language servers without any Rust code.** Confirmed from:

- `zed-extensions/nu/extension.toml` — has `[grammars.nu]` + `[language_servers.nu]`
- `zed-extensions/bash/extension.toml` — has `[language_servers.bash-language-server]` with `language` field

The schema is direct TOML, no Rust involved. The Zed docs confirm: "only language server, context server and debugger extensions require custom Rust" for *procedural* behavior like dynamic discovery or complex setup logic. If the LSP binary name is static (always `dylan-lsp` or `lsp-dylan`), TOML-only works fine — Zed just launches it by that command name.

---

## Reference TOML Schemas (Actual from zed-extensions)

### extension.toml — Extension Manifest

```toml
id = "open-dylan"
name = "Open Dylan"
description = "Dylan language support with lsp-dylan LSP"
version = "0.0.1"
schema_version = 1
authors = ["Your Name <you@example.com>"]
repository = "https://github.com/your-username/zed-open-dylan"

[grammars.dylan]
repository = "https://github.com/indika-dev/tree-sitter-dylan"
commit = "<commit-sha>"

[language_servers.dylan-lsp]
languages = ["Dylan"]
name = "dylan-lsp"
```

**Key fields:**
| Field | Purpose |
|-------|---------|
| `id` | Unique extension ID (can't include "zed", "zEd", or "extension") |
| `grammar.*.repository` | GitHub URL for the tree-sitter parser |
| `grammar.*.commit` | Exact commit SHA to pin |
| `language_servers.*.languages` | Array of language names this LSP handles (must match config.toml `[name]`) |
| `language_servers.*.name` | Binary name Zed will invoke (e.g. `dylan-lsp`, `lsp-dylan`) |

### config.toml — Language Definition (under `languages/open-dylan/`)

```toml
name = "Dylan"
grammar = "dylan"
path_suffixes = ["dylan", "lib"]
kernel_language_names = ["dylan", "opendylan"]
line_comments = ["# "]
autoclose_before = ";:.,=}])>` \n\t\""
first_line_pattern = '^#!.*\b(?:dylan|opendylan)\b'
brackets = [
    { start = "{", end = "}", close = true, newline = true },
    { start = "[", end = "]", close = true, newline = true },
    { start = "(", end = ")", close = true, newline = true },
]
```

**Key fields:**
| Field | Purpose |
|-------|---------|
| `name` | Display name — must match what's in `language_servers.*.languages` |
| `grammar` | Grammar name matching `[grammars.xxx]` ID above |
| `path_suffixes` | File extensions to auto-detect (`.dylan`, `.lib`) |
| `line_comments` | Character prefix for line comments |
| `autoclose_before` | Characters before which quotes/parens auto-close |
| `first_line_pattern` | Shebang regex for first-line detection |
| `brackets` | Auto-indent pair brackets |

### directory-structure — Required Files

```
zed-open-dylan/
├── extension.toml              # Extension manifest (mandatory)
├── LICENSE                     # MIT required (Oct 1, 2025 rule from Zed docs)
├── README.md                   # Setup instructions
└── languages/
    └── open-dylan/
        ├── config.toml         # Language definition with grammar + file types + behavior
```

---

## What's Available in the Wild

### 1. `dylan-lang/lsp-dylan` — Official LSP Server
- **Status**: Active, built on May 2024 (6 months ago at time of last check). Implements:
  - Jump to definition / declaration
  - Diagnostics (compiler warnings)
  - Hover (argument lists)
- **Build**: From source using the Open Dylan build system (Makefile + Jamfiles in `sources/`)
- **Binary name**: Likely `dylan-lsp` or `lsp-dylan` (needs verification — check Makefile output)
- **License**: MIT

### 2. `indika-dev/tree-sitter-dylan` — Tree-sitter Grammar
- **Status**: Active, last commit May 17, 2026. The public tree-sitter grammar for Dylan.
- **Usage**: Point `[grammars.dylan].repository` at this URL + pin a commit SHA
- This is the preferred syntax highlighting source (TextMate grammars for Dylan don't exist anywhere)

### 3. `lsp-dylan` submodule (`vscode-dylan`) — VSCode Extension
- The vscode-dylan extension lives as a git submodule in `dylan-lang/lsp-dylan`
- It has its own tree-sitter grammar but is built into that extension, not standalone usable

---

## Implementation Steps (in order)

### Step 1: Confirm LSP binary name and fetch tree-sitter commit

1. Fetch `lsp-dylan` build output to determine the actual server binary name  
   (`Makefile` or `dylan-package.json` should show this — likely `dylan-lsp`)
2. Fetch the latest commit SHA from `indika-dev/tree-sitter-dylan` main branch
3. Verify the grammar has a valid `grammar/src/` directory

### Step 2: Create extension structure

```
zed-open-dylan/
├── extension.toml
├── LICENSE (MIT)
├── README.md
└── languages/open-dylan/config.toml
```

### Step 3: Write all files with confirmed values

- **extension.toml** — manifest + grammar reference + language server config (with actual commit SHA and binary name from step 1)
- **config.toml** — language definition with proper path_suffixes/brackets
- **LICENSE** — MIT license file
- **README.md** — setup guide including:
  - How to build/install `dylan-lsp` on macOS (Xcode tools / Open Dylan package)
  - How to install dev extension in Zed via GUI
  - Binary name expected (`dylan-lsp`) and PATH requirements

### Step 4: Test locally in Zed

1. In Zed (v1.7.2+), go to extensions page → "Install Dev Extension"
2. Select the `zed-open-dylan` directory
3. Open a `.dylan` file — confirm syntax highlighting and LSP connection
4. Debug via `zed --foreground` terminal if needed

### Step 5: Optional — Publish (future)

If Zed publishing rules are met:
1. Create a PR to `zed-industries/extensions` 
2. Add extension as a Git submodule under `extensions/open-dylan`
3. Add entry to top-level `extensions.toml`
4. Run `pnpm sort-extensions`

---

## Environment Details

| Item | Value |
|------|-------|
| Host machine | macOS |
| Zed version | 1.7.2 |
| Rust required? | **No** (TOML-only approach) — but rustup needed if switching to Rust later |
| Extension install path (dev) | Set by Zed on "Install Dev Extension" |
| LSP binary name | TBD in Step 1 (likely `dylan-lsp`) |
| Tree-sitter grammar repo | `indika-dev/tree-sitter-dylan` |

---

## Publishing Rules to Enforce

From zed.dev/docs/extensions/developing-extensions:

- Extensions must NOT ship LSP binaries — rely on them being on PATH
- Repository must have a valid license (MIT listed)
- Extension IDs/names can't contain "zed", "zEd", or "extension"
- Must provide something not already available in marketplace (no existing Dylan extension found)
- Themes should be published as separate extensions, not bundled with language support

---

## Risks & Unknowns

1. **Binary name**: Need to verify the exact LSP binary name from `lsp-dylan` Makefile before finalizing
2. **tree-sitter commit SHA**: Will change during Step 1 fetch — will be a placeholder now
3. **macOS build of dylan-lsp**: May need Xcode tools or Open Dylan package manager; need to verify build process on macOS
4. **Zed TOML config limits**: Could there be restrictions on custom language servers? The `nu` and `bash` examples confirm it works, but YMMV
