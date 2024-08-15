# https://www.bilibili.com/video/BV1pY4y1J7na
# https://www.luogu.com.cn/problem/P1048
# t即为背包容量，采药时间即为重量，n_drug即为物品数量
t,n_drug=map(int,input().split())
a=[]
for i in range(n_drug):
    a.append(list(map(int,input().split())))    # [[t,value]]
dp=[[0]*(t+1) for _ in range(n_drug+1)]

# 先看dp表第一层（索引为1）
t_current_item=a[0][0]
value_current_item=a[0][1]
for current_t in range(1,t+1):
    if current_t>=t_current_item:
        dp[1][current_t]=value_current_item

# 因为是01背包问题，每个物体只能被取一次
for item_index in range(2,n_drug+1):
    t_current_item=a[item_index-1][0]
    value_current_item=a[item_index-1][1]
    for current_t in range(1,t+1):
        if current_t>=t_current_item:
            add_current_itemValue_sum_value=dp[item_index-1][current_t-t_current_item]+value_current_item
            if add_current_itemValue_sum_value>dp[item_index-1][current_t]:
                dp[item_index][current_t]=add_current_itemValue_sum_value
            else:
                dp[item_index][current_t]=dp[item_index-1][current_t]
        else:       # 根本不用考虑当前物品，故直接继承上一格即可
            dp[item_index][current_t]=dp[item_index-1][current_t]
print(dp[-1][-1])

# AC https://www.luogu.com.cn/record/167935853