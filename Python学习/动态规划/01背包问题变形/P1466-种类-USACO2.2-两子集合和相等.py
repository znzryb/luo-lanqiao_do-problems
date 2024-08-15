# https://www.luogu.com.cn/problem/P1466
# {1,2,3}
# {1,2} and {3}
# 这是一种分法
# 本题输出有几种分法
n=int(input())
a=[]
for i in range(1,n+1):
    a.append(i)
suma=sum(a)

if suma%2 != 0:
    print(0)
    exit()


m_bag=suma//2
dp=[0]*(m_bag+1)
for i in range(1,n+1):
    for curr_b in range(m_bag,0,-1):
        if curr_b >= i:
            if dp[curr_b-i]!=0 or curr_b-i==0:
                if i==curr_b:
                    dp[curr_b]=dp[curr_b]+1
                else:
                    dp[curr_b]=dp[curr_b-i]+dp[curr_b]
print(dp[-1]//2)

# AC https://www.luogu.com.cn/record/169100161