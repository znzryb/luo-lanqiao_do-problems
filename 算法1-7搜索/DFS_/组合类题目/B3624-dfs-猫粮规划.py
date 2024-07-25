# 输入输出解释
# 4 70 85       4种猫粮，组合能量值介于[70,85]
# 10 10 20 50   猫粮能量值列表
# 输出
# 4   共有4种组合

def dfs(x,current_sum):
    global n,l,r,feeds,ans
    if r>=current_sum>=l:
        ans+=1
    if current_sum>r:
        return
    if x>=n:
        return
    for i in range(x,n):
        dfs(i+1,current_sum+feeds[i])
    

n,l,r=map(int,input().split())
feeds=list(map(int,input().split()))
ans=0
dfs(0,0)
print(ans)

# AC https://www.luogu.com.cn/record/167770772