from collections import deque

y_,x_,a,b=map(int,input().split())
plague_o_list=[]
landlord_list=[]
for i in range(a):
    y0,x0=map(int,input().split())
    plague_o_list.append([x0-1,y0-1])
for i in range(b):
    y0,x0=map(int,input().split())
    landlord_list.append([x0-1,y0-1])

# 初始化工作
direction=[(1,0),(-1,0),(0,1),(0,-1)]
q=deque()
maze=[['*']*x_ for _ in range(y_)]

for x0,y0 in plague_o_list:
    maze[y0][x0]=0
    q.append((x0,y0))



t=0
count=a
element_number=x_*y_
# BFS的重点在于模拟，就是每过一段时间，所有点就向外扩一次，而不是先让一个点扩完，即传染完
while q:
    t=t+1
    need_add=[]
    while q:
        x0,y0=q.popleft()
        for dx,dy in direction:
            nx=x0+dx
            ny=y0+dy
            if (0<=nx and nx<x_) and (ny>=0 and ny<y_):
                if maze[ny][nx]=='*':    # 装了'*'，继续操作
                    maze[ny][nx]=t
                    need_add.append((nx,ny))
                    
    q=deque()
    for i in need_add:
        q.append(i)

for ix,iy in landlord_list:
    print(maze[iy][ix])

# AC https://www.luogu.com.cn/record/169530360