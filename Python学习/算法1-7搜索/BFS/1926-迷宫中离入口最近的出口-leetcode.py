from collections import deque
def nearestExit(maze, entrance):
    x_=len(maze[0])
    y_=len(maze)
    queue=deque([(entrance[1],entrance[0],0)])
    maze[entrance[0]][entrance[1]]='*'
    while queue:
        x0,y0,d=queue.popleft()
        

        direction=[(1,0),(-1,0),(0,1),(0,-1)]
        
        for dx,dy in direction:
            nx=x0+dx
            ny=y0+dy
            if 0<=nx<x_ and 0<=ny<y_:
                if  maze[ny][nx]=='.':
                    queue.append((nx,ny,d+1))
                    maze[ny][nx]='*'
            elif ((nx<0 or nx>=x_) or (ny<0 or ny>=y_)) and d!=0:
                return d
    return-1


print(nearestExit(maze = [["+","+","+"],[".",".","."],["+","+","+"]], entrance = [1,0]))

# https://leetcode.cn/problems/nearest-exit-from-entrance-in-maze/submissions/550635102/
# AC   小心笔误



# ans=[]
# def bfs(x,y,count):
#     global maze,ans
#     if 0<=x<x_ and 0<=y<y_ and maze[y][x]=='.':
#         maze[y][x]='*'          # 代表这个格子走过了
#         count+=1
#         direction=[(1,0),(-1,0),(0,1),(0,-1)]
#         for i in direction:
#             bfs(x+i[0],y+i[1],count)
#     elif (x<0 or x>=x_) and (y<0 or y>=y_):
#         ans.append(count)
#         return
#     return
# bfs(entrance[1],entrance[0],0)

# if ans:
#     print(ans)
# else:
#     print(-1)