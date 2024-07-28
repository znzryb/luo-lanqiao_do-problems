# 针对subtask2/3的特殊话接发
# Subtask 2（8 pts）：
# 𝑎
# a 中全为正数或全为负数。
# Subtask 3（19 pts）：
# 𝑎
# a 中有且只有一个正数（注意 
# 𝑎
# a 中可以有 
# 0
# 0）。
import itertools 
n=int(input())
a=list(map(int,input().split()))

if n<=10:
    ans=0
    permutation_a=itertools.permutations(a)
    for i in permutation_a:
        f=0
        for j in i:
            if f*j <= 0:
                f+=j
        ans=max(ans,f)
    print(ans)
    exit()

a.sort()
if a[-1]>0 and a[-2]<=0:
    print(a[-1]+a[-2])
elif a[0]<0 and a[1]>=0:
    print(a[-1]+a[0])
else:
    a_max=max(a)
    print(a_max)