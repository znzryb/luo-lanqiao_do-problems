n_diet, m_money = map(int, input().split())
a = list(map(int, input().split()))

# 初始化dp数组，dp[0] = 1 表示凑出0元的方法有1种（即什么都不买）
dp = [0] * (m_money + 1)
dp[0] = 1

# 遍历每一种菜
for i in range(n_diet):
    diet_cost = a[i]
    # 从diet_cost开始更新dp数组
    for curr_money in range(m_money, diet_cost - 1, -1):
        dp[curr_money] += dp[curr_money - diet_cost]

# 输出刚好把钱花完的方法数
print(dp[m_money])