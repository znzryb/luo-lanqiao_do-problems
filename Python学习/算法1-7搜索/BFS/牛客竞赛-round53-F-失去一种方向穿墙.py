# https://ac.nowcoder.com/acm/contest/86387/F
from collections import deque
import copy
# 输入
y_,x_=map(int,input().split())
maze=[]
for i in range(y_):
    maze.append(list(input()))

maze[0][0]='*'
mazeCopy=copy.deepcopy(maze)

    # 各个方向都能走  不能走上       不能走下     不能走左      不能走右
qList=[(0,0,0,4,0),(0,0,0,3,1),(0,0,0,2,1),(0,0,0,1,1),(0,0,0,0,1)] # x,y,d,健全，穿墙次数
direction5=[[(-1,0),(0,1),(0,-1)],[(1,0),(0,1),(0,-1)],[(1,0),(-1,0),(0,-1)],[(1,0),(-1,0),(0,1)],[(1,0),(-1,0),(0,1),(0,-1)]]
# 在这个二维数组中，向上是减，向下是加


# 无递归
def bfs(q):
    global direction5,maze
    while q:
        x0,y0,d,dI,throughAb=q.popleft()

        for dx,dy in direction5[dI]:
            nx=x0+dx
            ny=y0+dy
            if (0<=nx and nx<x_) and (ny>=0 and ny<y_):

                # 终点判断
                if nx==x_-1 and ny==y_-1 :
                    if maze[ny][nx]=='.':
                        return d+1
                    # 不需要，终点一定是空地
                    # elif maze[ny][nx]=='X' and throughAb==1:
                    #     return d+1
                    
                # 走路与穿墙判断
                if maze[ny][nx]=='.':
                    q.append((nx,ny,d+1,dI,throughAb))
                    maze[ny][nx]='*'      # 标记为已经走过
                elif maze[ny][nx]=='X' and throughAb==1:
                    maze[ny][nx]='*'
                    throughAb=0
                    q.append((nx,ny,d+1,dI,throughAb))
                
    return -1
            


ans=-1
for i in qList:
    q=deque([i])    
    curr_d=bfs(q)
    if curr_d >= 0 :
        if ans == -1:
            ans=curr_d
        else:
            ans=min(ans,curr_d)
    maze=copy.deepcopy(mazeCopy)

print(ans)

# 能通过45.45%的测试样例
# 4 4
# .XXX
# ..X.
# .XX.
# .XX.
# hack数据
