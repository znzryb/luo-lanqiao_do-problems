# 输入输出解释
# 4 70 85       4种猫粮，组合能量值介于[70,85]
# 10 10 20 50   猫粮能量值列表
# 输出
# 4   共有4种组合

import itertools
def search(combinations,i):
    global ans
    for combo in combinations:
        sum1=sum(combo)
        if l<=sum1<=r:
            ans+=1
        if combo[-1]==feeds[i-1] and sum1>r:
            return 0
    return 1

            
n,l,r=map(int,input().split())
feeds=list(map(int,input().split()))
feeds.sort()
ans=0
for i in range(1,n+1):
    combinations=itertools.combinations(feeds,i)
    whetherBreak=search(combinations,i)
    if whetherBreak==0:
        break
print(ans)

# 50% https://www.luogu.com.cn/record/167659007