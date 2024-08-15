# https://www.luogu.com.cn/problem/P2925
Vlimit,h_grass=map(int,input().split())
grasses=[]
for i in range(h_grass):
    grasses.append(int(input()))

dp=[0]*(Vlimit+1)

for i in range(h_grass):
    grassV=grasses[i]
    for curr_v in range(Vlimit,0,-1):
        if curr_v >= grassV:
            dp[curr_v]=max(dp[curr_v],dp[curr_v-grassV]+grassV)
print(dp[-1])