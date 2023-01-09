local M = {}

function M.setup(config)
  local success, parsers = pcall(require, 'nvim-treesitter.parsers')
  if success then
    parsers.get_parser_configs().drools = {
      install_info = {
        url = config.plugin_dir,
        files = { 'src/parser.c' },
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
      },
    }
  end
end

return M
