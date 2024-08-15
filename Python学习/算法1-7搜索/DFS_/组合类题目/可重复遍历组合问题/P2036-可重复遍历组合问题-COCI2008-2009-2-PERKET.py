# https://www.luogu.com.cn/problem/P2036
# 这确实是组合类问题，但该算法可能会重复，不适用于组合类技术问题
def dfs(x,multipleS,sumB):
    global n,a,minn
    if x>=n:
        return
    s,b=a[x][0],a[x][1]     # 酸度，苦度
    newMultipleS=multipleS*s
    newSumB=sumB+b
    minn=min(minn,abs(newSumB-newMultipleS))
    dfs(x+1,newMultipleS,newSumB)
    dfs(x+1,multipleS,sumB)

n=int(input())
a=[]
for i in range(n):
    a.append(list(map(int,input().split())))
minn=10**9
# for i in range(n):
#     dfs(i,1,0)
dfs(0,1,0)
print(minn)

# AC https://www.luogu.com.cn/record/167556935