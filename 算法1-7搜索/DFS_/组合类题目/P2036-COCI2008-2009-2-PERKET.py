# https://www.luogu.com.cn/problem/P2036
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