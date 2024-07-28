s=int(input())
dp=[0]*(s+1)

for i in range(1,s+1):
    divisors=[]
    for j in range(1,i):
        if i%j == 0:
            divisors.append(j)
    sum_divisor=sum(divisors)
    for curr_s in range(s,0,-1):
        if curr_s >= i:
            dp[curr_s]=max(dp[curr_s],dp[curr_s-i]+sum_divisor)
print(dp[-1])