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

# 思路是遍历所有点位，通过DFS找到与其联通的所有W，并将他们searched=True
# 然后如果遍历到与这个W联通的W（在searched中），就不找了

def dfs(a,x,y,searched,n,m):
    stack=[[x,y]]
    while stack:
        x,y=stack.pop()
        if 0<=y<=n-1 and 0<=x<=m-1 and not searched[y][x] and a[y][x]=='W':
            searched[y][x]=[True]
            for dx, dy in [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]:
                stack.append([x+dx,y+dy])

n,m=map(int,input().strip().split())
a=[]
for i in range(n):
    a.append(list(input().strip()))
searched=[[False]*m for _ in range(n)]

ans=0
for i in range(n):
    for j in range(m):
        if not searched[i][j] and a[i][j]=='W':
            dfs(a,x=j,y=i,searched=searched,n=n,m=m)
            ans+=1
print(ans)

## 10 12         (n行数,m列数)
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

# 思路是遍历所有点位，通过DFS找到与其联通的所有W，并将他们searched=True
# 然后如果遍历到与这个W联通的W（在searched中），就不找了

def dfs(a,x,y,searched,n,m):
    stack=[[x,y]]
    while stack:
        x,y=stack.pop()
        if 0<=y<=n-1 and 0<=x<=m-1 and not searched[y][x] and a[y][x]=='W':
            searched[y][x]=[True]
            for dx, dy in [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]:
                stack.append([x+dx,y+dy])

n,m=map(int,input().strip().split())
a=[]
for i in range(n):
    a.append(list(input().strip()))
searched=[[False]*m for _ in range(n)]

ans=0
for i in range(n):
    for j in range(m):
        if not searched[i][j] and a[i][j]=='W':
            dfs(a,x=j,y=i,searched=searched,n=n,m=m)
            ans+=1
print(ans)

# AC https://www.luogu.com.cn/record/167092857