local M = {}

M.DEFAULT_CONFIG = {
  treesitter = {
    install_info = {
      url = 'tree-sitter-drools',
      files = { 'src/parser.c' },
      generate_requires_npm = false,
      requires_generate_from_grammar = false,
    },
  },
}

function M.setup(config)
  config = config and config or {}
  require('drools.treesitter').setup(config)
end

return M
