def dfs(sweets, salties, x, y, count, min_count):
    if x <= 0 and y <= 0:
        return min(count, min_count)
    
    if x > 0:
        for i in range(len(sweets)):
            new_sweets = sweets[:i] + sweets[i+1:]
            min_count = dfs(new_sweets, salties, x - sweets[i], y, count + 1, min_count)
    
    if y > 0:
        for i in range(len(salties)):
            new_salties = salties[:i] + salties[i+1:]
            min_count = dfs(sweets, new_salties, x, y - salties[i], count + 1, min_count)
    
    return min_count

n, x, y = map(int, input().split())
sweets = list(map(int, input().split()))
salties = list(map(int, input().split()))

min_count = float('inf')
min_count = dfs(sweets, salties, x, y, 0, min_count)

if min_count == float('inf'):
    print(-1)
else:
    print(min_count)