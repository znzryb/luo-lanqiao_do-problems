from collections import deque
n=int(input())
maze=[]
for i in range(n):
    maze.append(list(input()))
s_y,s_x,e_y,e_x=map(int,input().split())
s_x,s_y,e_x,e_y=s_x-1,s_y-1,e_x-1,e_y-1

q=deque([(s_x,s_y,0)])
maze[s_y][s_x]='2'
while q:
    x0,y0,d=q.popleft()      # 队列，弹出队首
    direction=[(1,0),(-1,0),(0,1),(0,-1)]
    for dx,dy in direction:
        nx,ny=x0+dx,y0+dy
        if nx==e_x and ny==e_y:
            print(d+1)  # 因为输出的时候还没加上这步，所以要加1
            exit()
        elif (nx>=0 and nx<n) and (ny>=0 and ny<n) and maze[ny][nx]=='0':
            maze[ny][nx]='2'      # 标记为已经走过
            q.append((nx,ny,d+1))

# print(d)
# 测试数据——2
# 10
# 0100110100
# 0001110010
# 1000000001
# 1000100011
# 0000101100
# 1000001100
# 1001010011
# 0000010100
# 0101010000
# 1001000001
# 1 7 10 2