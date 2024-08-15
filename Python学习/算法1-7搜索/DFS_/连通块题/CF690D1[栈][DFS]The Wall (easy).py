import sys
sys.setrecursionlimit(200000)  # 设置递归深度

def dfs(a, x, y, searched, n, m):
    stack = [(x, y)]
    while stack:
        cx, cy = stack.pop()
        if 0 <= cx < m and 0 <= cy < n and a[cy][cx] == 'B' and not searched[cy][cx]:
            searched[cy][cx] = True
            # 加入所有8个方向的邻居节点
            for dx, dy in [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]:
                stack.append((cx + dx, cy + dy))

n, m = map(int, input().strip().split())
a = [list(input().strip()) for _ in range(n)]

searched = [[False] * m for _ in range(n)]
ans = 0

for i in range(n):
    for j in range(m):
        if a[i][j] == 'B' and not searched[i][j]:
            dfs(a, j, i, searched, n, m)
            ans += 1

print(ans)

# AC   https://www.luogu.com.cn/record/167030259