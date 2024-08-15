# 输入输出解释
# 389 207 155 300 299 170 158 65 敌方导弹来袭高度
# 6     第一个数字表示这套系统最多能拦截多少导弹
# 2     第二个数字表示如果要拦截所有导弹最少要配备多少套这种导弹拦截系统
a=list(map(int,input().split()))
n=len(a)
dp=[]

for i in range(n):
    if i==0:
        count=1
        dp[i]=[a[i],1]
    else:
        for j in range(i):


