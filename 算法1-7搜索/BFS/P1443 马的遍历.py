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
def bfs(a,sx,sy,x_,y_,vis,dir=dir):
    for i in range():
        
    # while 
    # queue=[[sx,sy]]
    # if 0<=sy<=y_-1 and 0<=sx<=x_-1 and not vis[sy][sx]:
    #     for 

dir=([2,1],[-2,1],[2,-1],[-2,-1],[1,2],[-1,-2],[-1,2],[1,-2])
x_,y_,sx,sy=map(int,input().strip().split())    
a=[]
for i in range(y_):
    a.append([-1]*x_)
a[sy-1][sx-1]=0
vis=[[False]*x_ for _ in range(y_)]

