# 输入输出解释
# 宽*长
# 4 10
# 0234500067   2345  1  67  5    共4个细胞（上下左右若还是细胞数字则为同一细胞）
# 1034560500    345  2      671
# 2045600671                 89
# 0000000089
# 输出
# 4 （4个细胞）

# 栈优化
# 即不借助递归，使用栈来进行深度优先搜索
# 具体见函数体

# 这个函数其实就是把这个细胞里的其他元素全部加入vis，避免重复计数
import sys
sys.setrecursionlimit(200000)

def dfs(a,sx,sy,n,m,vis):
        stack=[[sx,sy]]              # stack相当于中间变量，在开头创建
        while stack:
            sx,sy=stack.pop()      # sx是source_x的简称
            if 0<=sy<=n-1 and 0<=sx<=m-1 and a[sy][sx]!='0' and not vis[sy][sx]:
                vis[sy][sx]=True
                for dx,dy in [[0,1],[0,-1],[1,0],[-1,0]]:   # dx即是 direction-x的简称
                    if 0<=sy+dy<=n-1 and 0<=sx+dx<=m-1:
                        stack.append([sx+dx,sy+dy])

n,m=map(int,input().strip().split())
a=[]
for i in range(n):
    a.append(list(input().strip()))
vis=[[False] * m for _ in range(n)]      # 存在里面的[x,y]表示已经被访问过

ans=0
for i in range(n):
    for j in range(m):
        if a[i][j]!='0' and not vis[i][j]:  
            dfs(a,j,i,n,m,vis)
            ans+=1
print(ans)