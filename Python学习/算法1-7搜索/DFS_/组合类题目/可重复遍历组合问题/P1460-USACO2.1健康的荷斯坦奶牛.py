# 输入输出解释
# 4               牛每天需要的维他命种类数v
# 100 200 300 400  最小摄入量
# 3
# 50  50  50  50   每种饲料含各类维他命数
# 200 300 200 300
# 900 150 389 399
#输出解释
#最少需要饲料种类数，选择的饲料编号
# 2 1 3
def dfs(x,vmtTake):
    global vmt,v,foods,kind,minnKind
    for i in range(v):
        if vmtTake[i]<v[i]:
            judge=0
            break
        else:
            judge=1
    if judge==1:
        return
    if x>=kind:
        return
    oldvmtTake=vmtTake[:]
    for i in range(v):
        vmtTake[i]=vmtTake[i]+foods[x][i]
    dfs(x+1,vmtTake)
    dfs(x+1,oldvmtTake)
    

v=int(input().strip())
vmt=list(map(int,input().strip().split()))
kind=int(input().strip())
foods=[]
for i in range(kind):
    foods.append(list(map(int,input().strip().split())))
vmtTake=0
for i in range(v):
    vmtTake.append(0)
minnKind=10000
minnComb=[]


