local M = {}

function M.setup(config)
  if not config.plugin_dir then
    return
  end
  local success, parsers = pcall(require, 'nvim-treesitter.parsers')
  if success then
    local parser_configs = parsers.get_parser_configs()
    -- see nvim-treesitter/lua/nvim-treesitter/install.lua @ local function install(options)
    -- do the install ourselves
    -- still set in parser_configs
    -- ask for reinstall? what to do when conflict?
    if not parser_configs.drools then
      parser_configs.drools = {
        install_info = {
          url = config.plugin_dir,
          files = { 'src/parser.c' },
          generate_requires_npm = false,
          requires_generate_from_grammar = false,
        },
      }
    end
  end
end

return M
