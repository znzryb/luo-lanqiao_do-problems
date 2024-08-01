# 其实BFS不难，如这题，就是先把所有一次能走到的点加入列表
# 接着再以走一次的点为基础，把所有这个点能走一次到的点加入列表
# 如此往复，即可得到所有点的最短路径

# 解释输入输出
# 长*宽 x y
# 3 3 1 1
# 输出为到每个点最少要几步,-1即是到不了
# 0    3    2    
# 3    -1   1    
# 2    1    4
from collections import deque

y_,x_,y,x=map(int,input().split())

maze=[['-1']*x_ for _ in range(y_)]   # 初始化棋盘

x,y=x-1,y-1
maze[y][x]='0'
direction=[(1,2),(1,-2),(-1,2),(-1,-2),(2,1),(2,-1),(-2,1),(-2,-1)]
q=deque([(x,y,0)])
while q:
    x0,y0,d=q.popleft()
    for dx,dy in direction:
        nx,ny=x0+dx,y0+dy
        if (0<=nx and nx<x_) and (ny>=0 and ny<y_):
            if maze[ny][nx]=='-1':
                q.append((nx,ny,d+1))
                maze[ny][nx]='{}'.format(d+1)
for i in maze:
    print(' '.join(i))

# AC https://www.luogu.com.cn/record/169297563