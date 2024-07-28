n,x=map(int,input().split())
lose_win_uses=[]
for i in range(n):
    lose_win_uses.append(list(map(int,input().split())))

dp=[0]*(x+1)

for i in range(n):
    lose=lose_win_uses[i][0]
    win=lose_win_uses[i][1]
    use=lose_win_uses[i][2]
    for curr_useL in range(x,-1,-1):    # 该背包问题比较特殊，即便是x=0（即背包容量为0）也有值
        if curr_useL >= use:
            dp[curr_useL]=max(dp[curr_useL]+lose,dp[curr_useL-use]+win)
        else:
            dp[curr_useL]=dp[curr_useL]+lose
print(dp[-1]*5)