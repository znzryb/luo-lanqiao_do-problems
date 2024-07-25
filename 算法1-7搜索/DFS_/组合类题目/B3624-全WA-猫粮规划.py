# 输入输出解释
# 4 70 85       4种猫粮，组合能量值介于[70,85]
# 10 10 20 50   猫粮能量值列表
# 输出
# 4   共有4种组合

def search(x,energy):   # 
    global feeds,ans,n,l,r
    if energy>r:
        return
    if r>=energy>=l:
        ans+=1
    if x>=n:
        return
    newEnergy=energy+feeds[x]
    search(x+1,newEnergy)
    search(x+1,energy)      # 相当于跳过x，直接去搜索下一个，适用于组合问题
    

n,l,r=map(int,input().split())
feeds=list(map(int,input().split()))
ans=0       # 方案总数
energy=0
search(0,energy)
for i in range(n):
    energy=0
    search(i,energy)
print(ans)

# 全WA，因为重复遍历了