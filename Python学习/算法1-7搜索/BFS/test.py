# from collections import deque

# n = int(input())
# maze = [input() for _ in range(n)]
# s_x, s_y, e_x, e_y = map(lambda x: int(x) - 1, input().split())

# visited = [[False] * n for _ in range(n)]
# q = deque([(s_x, s_y, 0)])
# visited[s_y][s_x] = True

# directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

# while q:
#     x, y, d = q.popleft()
    
#     if x == e_x and y == e_y:
#         print(d)
#         exit()
    
#     for dx, dy in directions:
#         nx, ny = x + dx, y + dy
#         if 0 <= nx < n and 0 <= ny < n and maze[ny][nx] == '0' and not visited[ny][nx]:
#             visited[ny][nx] = True
#             q.append((nx, ny, d + 1))

# print(-1)  # 如果无法到达目的地

if 0==False:
    print(-1)