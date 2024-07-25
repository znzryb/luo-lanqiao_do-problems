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
def dfs(x,vitTake,foodComb):
    global vmt,v,foods,kind,minnKind,minnComb

    judge=all(vitTake[_]>=vmt[_] for _ in range(v))

    if judge:
        len_foodComb=len(foodComb)
        minnKind=min(minnKind,len_foodComb)
        if len_foodComb<len(minnComb):
            minnComb=foodComb[:]
        elif len_foodComb==len(minnComb):
            minnComb=min(minnComb,foodComb)
    if x>=kind:
        return
    # oldvitTake=vitTake[:]
    
    for i in range(x,kind):
        newvitTake=vitTake[:]
        for j in range(v):
            newvitTake[j]=newvitTake[j]+foods[i][j]
        dfs(i+1,newvitTake,foodComb+[i+1])      # 这个模版是指传入i+1以及当前状态的值
    

v=int(input().strip())
vmt=list(map(int,input().strip().split()))
kind=int(input().strip())
foods=[]
for i in range(kind):
    foods.append(list(map(int,input().strip().split())))
vitTake=[0]*v
minnKind=10000
minnComb=[1000]*15
dfs(0,vitTake,[])
print(minnKind,' '.join(map(str,minnComb)))


