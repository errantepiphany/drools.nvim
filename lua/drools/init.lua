local M = {}

function M.setup(config)
  config = config and config or {}
  require('drools.treesitter').setup(config)
end

return M
