use zed_extension_api::{self as zed, LanguageServerId, Result};

struct DylanExtension;

impl zed::Extension for DylanExtension {
    fn new() -> Self {
        DylanExtension
    }

    fn language_server_command(
        &mut self,
        _language_server_id: &LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<zed::Command> {
        let path = worktree.which("dylan-lsp-server").ok_or_else(|| {
            "dylan-lsp-server is not installed or not on your PATH. \
             Build it from https://github.com/dylan-lang/lsp-dylan and ensure \
             its install directory (e.g. ${DYLAN}/bin) is on PATH."
                .to_string()
        })?;

        Ok(zed::Command {
            command: path,
            args: vec![],
            env: worktree.shell_env(),
        })
    }
}

zed::register_extension!(DylanExtension);
