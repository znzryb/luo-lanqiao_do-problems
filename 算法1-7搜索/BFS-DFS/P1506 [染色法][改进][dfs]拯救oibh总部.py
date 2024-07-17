import sys
sys.setrecursionlimit(2000000) # 增加递归深度限制
# 传入参数a即oibh总部设计图，x为横坐标，y为纵坐标
# 和二叉树的深度优先遍历类似，‘不撞南墙不回头’，二叉树是碰到None回头，这是碰到‘*’回头
# 不同的是二叉树是两个方向，这是4个方向
# 记得撞到外面了也要返回
def dfs(a,x,y,c,d):
    #    不能超出矩阵范围              不能是已经填色的   不能是墙     
    if 0<=x<=c+1 and 0<=y<=d+1 and a[y][x]!='1' and a[y][x]!='*': #(用‘0’包裹了，相当于加了两行两列，故从c-1变为c+1)
        a[y][x]='1'
        dfs(a,x+1,y,c,d)    # 顺序不能反
        dfs(a,x,y+1,c,d)
        dfs(a,x-1,y,c,d)
        dfs(a,x,y-1,c,d)
    else:
        return
    
x,y=map(int,input().strip().split())
a=[['0']*(y+2)]
for i in range(x):
    a.append(['0']+list(input().strip())+['0']) # 直接用list()就可以把‘0000*’变为['0','0','0','*']
a.append(['0']*(y+2))

dfs(a,0,0,c=y,d=x)

# 遍历列表，输出即可
ans=0
for i in range(x):
    for j in range(y):
        if a[i][j]=='0':
            ans+=1
print(ans)
