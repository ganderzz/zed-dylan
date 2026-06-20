# Open Dylan Zed Extension

Zed extension providing full Open Dylan language support — syntax highlighting, bracket matching, line comments, hover diagnostics and IDE completion via `lsp-dylan`.

## Prerequisites

This extension requires the **Open Dylan Language Server** (`dylan-lsp-server`) to be installed on your system. The extension itself does not bundle it (per Zed publishing rules).

### Installing dylan-lsp-server

This extension needs the `dylan-lsp-server` binary on your PATH. Install it by:

1. Install [Open Dylan 2023.1 or newer](https://opendylan.org) following their official instructions
   
2. Clone and build `lsp-dylan`:
   ```bash
   git clone --recursive https://github.com/dylan-lang/lsp-dylan
   cd lsp-dylan
   deft update
   make install
   ```

3. Ensure the installation directory (typically `${DYLAN}/bin`, or `~/dylan/bin` if `DYLAN` is unset) is on your PATH:
   ```bash
   which dylan-lsp-server
   ```

## Syntax Highlighting

This extension uses the [indika-dev/tree-sitter-dylan](https://github.com/indika-dev/tree-sitter-dylan) grammar for syntax highlighting. Supported features:

- Full Dylan keyword and operator syntax
- Line comments (`# ...`)
- Block quotes (documentation strings)
- Template literals and string interpolation
- Module/library declaration highlighting

## File Types

The extension recognizes files with the following extensions:

- `.dylan` — Primary Dylan source file extension
- `.lib` — Library definition files

Files are also auto-detected by shebang lines matching `#!...dylan` or `#!...opendylan`.

## Usage in Zed

### Development Installation

1. Open Zed
2. Open Command Palette (`Cmd+Shift+P`)
3. Run **"Extensions: Install Dev Extension"**
4. Select the `zed-open-dylan` directory
5. Open any `.dylan` file — syntax highlighting should activate immediately

### Language Server Features

Once installed, the extension provides (requires `dylan-lsp-server` on PATH):

- **Hover** — Type information and argument lists for definitions
- **Jump to Definition** / **Jump to Declaration** — Navigate between symbols
- **Diagnostics** — Compiler warnings displayed inline
- **Auto-close brackets** — `{`, `[`, `(` auto-complete with matching pair
- **Line comments** — `#` prefix for comment lines

### Publishing (Future)

Once this extension is stable, it can be published to the Zed marketplace via:

1. Create PR to [zed-industries/extensions](https://github.com/zed-industries/extensions)
2. Add as submodule in `extensions/open-dylan`
3. Add entry to top-level `extensions.toml`

## Contributing

Pull requests welcome! Please ensure any changes:

- Follow TOML-only approach (no Rust required unless adding procedural behavior)
- Include MIT license
- Reference pinned commit hashes for tree-sitter dependencies

## License

MIT — see LICENSE file.
The `dylan-lsp-server` binary is licensed under its own MIT copyright held by Peter Hull.
