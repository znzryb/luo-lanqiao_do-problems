# 和拯救oibh总部很类似，具体解释看P1506
n=int(input().strip())
a=[[0]*(n+2)]
for i in range(n):
    a.append([0]+list(map(int,input().strip().split()))+[0])
a.append([0]*(n+2))

def dfs(a,x,y,n=n):
        # 边界判断要在格类型判断前
    if 0<=y<=n+1 and 0<=x<=n+1 and a[y][x]!=1 and a[y][x]!='*' :
        a[y][x]='*'
        dfs(a,x=x+1,y=y)
        dfs(a,x=x-1,y=y)
        dfs(a,x=x,y=y+1)
        dfs(a,x=x,y=y-1)
    else:
        return
    
dfs(a,x=0,y=0)

for i in range(n+2):
    for j in range(n+2):
        if a[i][j] == 0:
            a[i][j]='2'
        elif a[i][j] == '*':
            a[i][j]='0'
        elif a[i][j] == 1:
            a[i][j]='1'

for i in range(1,n+1):
    print(" ".join(a[i][1:n+1]))
