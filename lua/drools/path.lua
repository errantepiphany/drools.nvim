local sep = (function()
  ---@diagnostic disable-next-line: undefined-global
  if jit then
    ---@diagnostic disable-next-line: undefined-global
    local os = string.lower(jit.os)
    if os == 'linux' or os == 'osx' or os == 'bsd' then
      return '/'
    else
      return '\\'
    end
  else
    return string.sub(package.config, 1, 1)
  end
end)()

local M = {}

function M.concat(path_components)
  return table.concat(path_components, sep)
end

--[[
function M.is_subdirectory(root_path, path)
    return root_path == path or path:sub(1, #root_path + 1) == root_path .. sep
end
]]

function M.root_dir()
  return vim.fn.expand '<sfile>:p:h:h'
end

function M.treesitter_dir()
  return M.concat { M.root_dir(), 'lua', 'drools', 'treesitter' }
end

return M
