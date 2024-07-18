# 10 12         (n行数,m列数)
# W........WW.
# .WWW.....WWW
# ....WW...WW.
# .........WW.
# .........W..
# ..W......W..
# .W.W.....WW.
# W.W.W.....W.
# .W.W......W.
# ..W.......W.   以上为题目输入
#输出：3（3个水坑）（W上下左右和斜的都算连通）

# 思路是遍历所有点位，通过DFS找到与其联通的所有W，并将他们加入searched
# 然后如果遍历到与这个W联通的W（在searched中），就不找了
import sys
sys.setrecursionlimit(200000)



def dfs(a,x,y,searched,n,m):
    if 0<=y<=n-1 and 0<=x<=m-1 and a[y][x]=='W'and [x,y] not in searched:
        searched.append([x,y])
        dfs(a,x=x+1,y=y+1,searched=searched,n=n,m=m)
        dfs(a,x=x-1,y=y-1,searched=searched,n=n,m=m)
        dfs(a,x=x+1,y=y-1,searched=searched,n=n,m=m)
        dfs(a,x=x-1,y=y+1,searched=searched,n=n,m=m)
        dfs(a,x=x,y=y-1,searched=searched,n=n,m=m)
        dfs(a,x=x,y=y+1,searched=searched,n=n,m=m)
        dfs(a,x=x+1,y=y,searched=searched,n=n,m=m)
        dfs(a,x=x-1,y=y,searched=searched,n=n,m=m)
        return 1
    else:
        return 0

searched=[]
n,m=map(int,input().strip().split())
a=[]
for i in range(n):
    a.append(list(input().strip()))

sumW=0
for i in range(n):
    sumW+=a[i].count('W')
if sumW==n*m:
    print(1)
    exit()
    
ans=0
for i in range(n):
    for j in range(m):
        ans+=dfs(a,x=j,y=i,searched=searched,n=n,m=m)
        if ans==sumW:
            break
print(ans)
