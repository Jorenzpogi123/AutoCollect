-- Auto Coconut Collector Script (Roblox Lua)
local tree = script.Parent
local coconutTemplate = game.ServerStorage:WaitForChild("Coconut")

while true do
	wait(math.random(5, 10)) -- random drop time
	local coconut = coconutTemplate:Clone()
	coconut.Position = tree.Position + Vector3.new(0, -5, 0)
	coconut.Parent = workspace
end
