local M = {}

function M.lookup(t, path, def)
  path = path and path or {}
  if type(path) ~= 'table' then
    path = { path }
  end
  local i = 0
  for _, seg in ipairs(path) do
    i = i + 1
    if t[seg] then
      if i == #path then
        return t[seg]
      end
      if type(t[seg]) == 'table' then
        t = t[seg]
      end
    else
      break
    end
  end
  return def
end

return M
