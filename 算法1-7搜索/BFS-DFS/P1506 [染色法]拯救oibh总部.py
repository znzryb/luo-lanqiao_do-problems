# x,y,x是行数，y是列数，和传统认知是反的
# 本题思路是从外圈开始搜，把所有被洪水淹的地方都标记为‘1’，接着遍历输出0的个数
# 4 5
# 00000
# 00*00
# 0*0*0
# 00*00
# 经过一次外圈搜后
# 1 1 1 1 1
# 1 0 * 0 1
# 1 * 0 * 1
# 1 1 * 1 1
# 接着判断下一圈0周围是否有1即可判断是否应填充为1？
# 这是不够严谨的，会出现https://cdn.luogu.com.cn/upload/image_hosting/wr02l2ek.png的情况
# 故而需要使用dfs，详细说明见dfs函数注释
import math

# 传入参数a即oibh总部设计图，x为横坐标，y为纵坐标
# 和二叉树的深度优先遍历类似，‘不撞南墙不回头’，二叉树是碰到None回头，这是碰到‘*’回头
# 不同的是二叉树是两个方向，这是4个方向
# 记得撞到外面了也要返回
def dfs(a,x,y,c,d):
    #    不能超出矩阵范围              不能是已经填色的   不能是墙     
    if 0<=x<=c-1 and 0<=y<=d-1 and a[y][x]!='1' and a[y][x]!='*':
        a[y][x]='1'
        dfs(a,y+1,x,c,d)
        dfs(a,y,x+1,c,d)
        dfs(a,y-1,x,c,d)
        dfs(a,y,x-1,c,d)
    else:
        return



x,y=map(int,input().strip().split())
a=[]
for i in range(x):
    a.append(list(input().strip())) # 直接用list()就可以把‘0000*’变为['0','0','0','*']
n=math.ceil(min(x,y)/2)  # 这个搜索次数n是由min（x，y）决定的

# 先将外圈搜一遍
for i in range(y): # 搜上面和下面
    if a[0][i] != '*':
        a[0][i] = '1'
    if a[x-1][i] != '*':
        a[x-1][i] ='1'
for i in range(1,x-1):  # 搜左边和右边
    if a[i][0] != '*':
        a[i][0] = '1'
    if a[i][y-1] != '*':
        a[i][y-1] = '1'

for i in range(1,n):
    for j in range(y-2*i):  # 搜内圈
        #搜上面，判断此格是否与其他洪水格子联通,顺序为本格上下左右(逻辑为只要不是*且上下左右中有一格为1，该格子与洪水连通，记‘1’)
        if a[i][j+i] !='1' and a[i][j+i] !='*' and (a[i-1][j+i]=='1' or a[i+1][j+i]=='1' or a[i][j+i-1]=='1' or a[i][j+i+1]=='1'):
            dfs(a,j+i,i,y,x) # 记得j+i是x，别传反了
        #搜下面，逻辑同上，将i（纵坐标）替换为x-i-1即可
        if a[x-i-1][j+i] !='1' and a[x-i-1][j+i] !='*' and (a[x-i-1-1][j+i]=='1' or a[x-i+1-1][j+i]=='1' or a[x-i-1][j+i-1]=='1' or a[x-i-1][j+i+1]=='1'): 
            dfs(a,j+i,x-i-1,y,x)
    for j in range(x-2*i):
         #搜左面，把i替换为i+j，j+i替换为i
        if a[i+j][i] !='1' and a[i+j][i] !='*' and (a[i+j-1][i]=='1' or a[i+j+1][i]=='1' or a[i+j][i-1]=='1' or a[i+j][i+1]=='1'): 
            dfs(a,i,i+j,y,x)
        #搜右面，把i（横坐标）替换为y-i-1
        if a[i+j][y-i-1] !='1' and a[i+j][y-i-1] !='*' and (a[i+j-1][y-i-1]=='1' or a[i+j+1][y-i-1]=='1' or a[i+j][y-i-1-1]=='1' or a[i+j][y-i+1-1]=='1'): 
            dfs(a,y-i-1,i+j,y,x)

# 只搜一遍9456
# ***1
# *001
# ****
# 这种情况详见 https://cdn.luogu.com.cn/upload/image_hosting/wr02l2ek.png
# 答案8156
# 这题正解是dfs，不能用多搜一遍或者从内圈搜一遍解决


# 遍历列表，输出即可
ans=0
for i in range(x):
    for j in range(y):
        if a[i][j]=='0':
            ans+=1
print(ans)

# 全WA，看了题解决定用全dfs解决
