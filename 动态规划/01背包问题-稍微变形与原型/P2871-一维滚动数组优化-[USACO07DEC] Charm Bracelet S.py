n_item,m_bag=map(int,input().split())
weight_value_list=[]
for i in range(n_item):
    weight_value_list.append(list(map(int,input().split())))

dp=[0]*(m_bag+1)     # 滚动数组其实就是因为dp只依赖于前一个状态，所以可以只用一个一维数组实现
# 实际实现靠逆序遍历

for curt_item_index in range(1,n_item+1):
    curt_item_weight=weight_value_list[curt_item_index-1][0]    # 这里记得-1
    curt_item_value=weight_value_list[curt_item_index-1][1]
    for curt_bag in range(m_bag,0,-1):      # 逆序遍历很关键
        if curt_bag>=curt_item_weight:
                            # 在滚动数组中具体的，逆序遍历可保证滚动过程的原子化,即滚动过程之间不会互相影响
            add_curt_item_value=dp[curt_bag-curt_item_weight]+curt_item_value
            if add_curt_item_value>dp[curt_bag]:
                dp[curt_bag]=add_curt_item_value
            
print(dp[-1])
# AC https://www.luogu.com.cn/record/168121268