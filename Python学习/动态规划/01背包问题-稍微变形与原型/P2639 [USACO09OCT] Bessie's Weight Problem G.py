# https://www.luogu.com.cn/problem/P2639
limitE,n_grass=map(int,input().split())
grasses=[]
for i in range(n_grass):
    grasses.append(int(input()))

dp=[0]*(limitE+1)
for i in range(n_grass):
    grassE=grasses[i]
    for curr_E in range(limitE,0,-1):
        if curr_E >= grassE:
            dp[curr_E]=max(dp[curr_E],dp[curr_E-grassE]+grassE)
print(dp[-1])
