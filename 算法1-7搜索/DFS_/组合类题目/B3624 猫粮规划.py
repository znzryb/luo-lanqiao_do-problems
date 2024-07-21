# 输入输出解释
# 4 70 85       4种猫粮，组合能量值介于[70,85]
# 10 10 20 50   猫粮能量值列表
# 输出
# 4   共有4种组合

def search(x,energy):
    global feeds,ans,n,l,r
    if r>=energy>=l:
        ans+=1
    if x>=n:
        return
    energy+=feeds[x]
    search(x+1,energy)
    energy-=feeds[x]
    

n,l,r=map(int,input().split())
feeds=list(map(int,input().split()))
ans=0       # 方案总数
for i in range(n):
    energy=0
    search(i,energy)
print(ans)
