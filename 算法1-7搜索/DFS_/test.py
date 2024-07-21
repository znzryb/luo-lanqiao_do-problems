def dfs(x, multipleS, sumB):
    global n, a, minn
    if x >= n:
        return
    s, b = a[x][0], a[x][1]  # 酸度，苦度
    
    # Case 1: Include the current ingredient
    new_multipleS = multipleS * s
    new_sumB = sumB + b
    minn = min(minn, abs(new_multipleS - new_sumB))
    dfs(x + 1, new_multipleS, new_sumB)
    
    # Case 2: Skip the current ingredient
    dfs(x + 1, multipleS, sumB)

n = int(input())
a = []
for i in range(n):
    a.append(list(map(int, input().split())))
minn = 10**9

# Start the DFS from each ingredient to ensure at least one ingredient is chosen
for i in range(n):
    dfs(i, 1, 0)

print(minn)
