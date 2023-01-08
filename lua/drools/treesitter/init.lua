local M = {}

--- @diagnostic disable-next-line:unused-local
function M.setup(config)
  local success, parsers = pcall(require, 'nvim-treesitter.parsers')
  if success and not parsers.drools then
    parsers.drools = {
      install_info = {
        url = require('drools.path').treesitter_dir(),
        files = { 'parser.c' },
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
      },
    }
  end
end

return M
