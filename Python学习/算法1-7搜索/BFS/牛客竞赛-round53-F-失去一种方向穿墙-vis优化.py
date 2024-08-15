# https://ac.nowcoder.com/acm/contest/86387/F
from collections import deque
# 输入
y_,x_=map(int,input().split())
maze=[]
for i in range(y_):
    maze.append(list(input()))


    # 各个方向都能走  不能走上       不能走下     不能走左      不能走右
qList=[(0,0,0,4,0),(0,0,0,3,1),(0,0,0,2,1),(0,0,0,1,1),(0,0,0,0,1)] # x,y,d,健全，穿墙次数
direction5=[[(-1,0),(0,1),(0,-1)],[(1,0),(0,1),(0,-1)],[(1,0),(-1,0),(0,-1)],[(1,0),(-1,0),(0,1)],[(1,0),(-1,0),(0,1),(0,-1)]]

# 无递归
def bfs(q):
    global direction5,maze,visited
    while q:
        x0,y0,d,dI,throughAb=q.popleft()

        for dx,dy in direction5[dI]:
            nx,ny=x0+dx,y0+dy
            if (0<=nx and nx<x_) and (ny>=0 and ny<y_):

                # 终点判断
                if nx==x_-1 and ny==y_-1 :
                    if maze[ny][nx]=='.':
                        return d+1
                    
                # 走路与穿墙判断
                if maze[ny][nx]=='.' and visited.get((nx,ny,throughAb),0)==0:
                    q.append((nx,ny,d+1,dI,throughAb))
                    visited[(nx,ny,throughAb)]=1      # 标记为已经走过
                elif maze[ny][nx]=='X' and throughAb==1 and visited.get((nx,ny,throughAb),0)==0:
                    throughAb=0
                    visited[(nx,ny,throughAb)]=1
                    q.append((nx,ny,d+1,dI,throughAb))
                
    return -1
            


ans=-1
for i in qList:
    q=deque([i])
    visited={}
    visited[(0,0,i[-1])]=1
    curr_d=bfs(q)
    if curr_d >= 0 :
        if ans == -1:
            ans=curr_d
        else:
            ans=min(ans,curr_d)

print(ans)



