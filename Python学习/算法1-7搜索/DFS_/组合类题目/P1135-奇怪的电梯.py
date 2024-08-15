# 5 1 5
# 3 3 1 2 5
# 3 最少按键次数
# n 共有n层楼，start楼层，end楼层
def dfs(story):    # 
    global a,start,end,n

n,start,end=map(int,input().split())
a=list(map(int,input().split()))
minn=20000