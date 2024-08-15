n_item,m_bag=map(int,input().split())
weight_value_list=[]
for i in range(n_item):
    weight_value_list.append(list(map(int,input().split())))
dp=[[0]*(m_bag+1) for _ in range(n_item+1)]   # 初始化dp表，记得都加1，因为都包含放0个物体和背包容量为1的情况

for curt_item_index in range(1,n_item+1):
    curt_item_weight=weight_value_list[curt_item_index-1][0]    # 这里记得-1
    curt_item_value=weight_value_list[curt_item_index-1][1]
    for curt_bag in range(1,m_bag+1):
        if curt_bag>=curt_item_weight:
            add_curt_item_value=dp[curt_item_index-1][curt_bag-curt_item_weight]+curt_item_value
            if add_curt_item_value>dp[curt_item_index-1][curt_bag]:
                dp[curt_item_index][curt_bag]=add_curt_item_value
            else:
                dp[curt_item_index][curt_bag]=dp[curt_item_index-1][curt_bag]
        else:
            dp[curt_item_index][curt_bag]=dp[curt_item_index-1][curt_bag]
print(dp[-1][-1])
# 73% https://www.luogu.com.cn/record/167948166 要用一维滚动数组优化
# 这个dp表实际