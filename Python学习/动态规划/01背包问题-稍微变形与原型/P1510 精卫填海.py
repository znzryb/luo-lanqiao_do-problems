# https://www.luogu.com.cn/problem/P1510
v,n,c=map(int,input().split())
volume_cost=[]
for i in range(n):
    volume_cost.append(list(map(int,input().split())))

dp=[0]*(c+1)
for i in range(n):
    stone_volume=volume_cost[i][0]
    stone_cost=volume_cost[i][1]
    for curr_c in range(c,0,-1):
        if curr_c >= stone_cost:
            dp[curr_c]=max(stone_volume+dp[curr_c-stone_cost],dp[curr_c])

if dp[-1] >= v:
    for i in range(1,c+1):
        if dp[i] >= v:
            print(c-i)
            break
else:
    print('Impossible')
    
# AC https://www.luogu.com.cn/record/168703525