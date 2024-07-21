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
v=int(input().strip())
vmt=list(map(int,input().strip().split()))
kind=int(input().strip())
foods=[]
for i in range(kind):
    foods.append(list(map(int,input().strip().split())))

index=0
def dfs(index,foods,v,vmt,kind,bestComb,minFoods=kind):
    dfs(index+1,)


