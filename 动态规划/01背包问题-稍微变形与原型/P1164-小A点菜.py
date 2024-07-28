# 小 A 奉行“不把钱吃光不罢休”的原则，所以他点单一定刚好把 uim 身上所有钱花完。他想知道有多少种点菜方法。
# https://www.luogu.com.cn/problem/P1164
# 由于小 A 肚子太饿，所以最多只能等待 1 秒  （指的是运行时间限制）

n_diet,m_money=map(int,input().split())
a=[]
# 输入阶段
while len(a)<n_diet:
    a_element=list(map(int,input().split()))
    a=a+a_element

dp=[1]+[0]*(m_money)
for i in range(n_diet):
    diet_cost=a[i]
    for curr_money in range(m_money,0,-1):
        if curr_money >= diet_cost:
            if dp[curr_money-diet_cost] > 0:
                dp[curr_money]+=dp[curr_money-diet_cost]

print(dp[-1])
# AC https://www.luogu.com.cn/record/168499882


# n_diet,m_money=map(int,input().split())
# a=list(map(int,input().split()))
# dp=[_ for _ in range(m_money+1)]
# ans=0
# for i in range(n_diet):
#     diet_cost=a[i]
#     for curr_money in range(m_money,0,-1):
#         if curr_money >= diet_cost:
#             add_curr_diet_left_money=dp[curr_money-diet_cost]
#             if curr_money == m_money:
#                 if add_curr_diet_left_money == 0:
#                     ans+=1
#             if add_curr_diet_left_money < dp[curr_money]:
#                 dp[curr_money]=add_curr_diet_left_money
# print(ans)

# 没有摆脱传统背包的限制，实际上这题和01问题的区别还是比较大的，dp表里不能装剩余容量，只能装方案数
# 其实也可以装剩余容量，只是没必要，很麻烦，毕竟让你输出方案数嘛