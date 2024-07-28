# https://www.luogu.com.cn/problem/P1466
# 我们不妨把40个数分成左右两边，
# 考虑到选取若干个数时最后一定是左右两边各取若干。那我们可以对左右两边分别枚举子集，
# 用一个数组把其中一边的组合值存起来，记作b[M]。那么我们只需要在另外一边枚举的时候，
# ans+=b[sum/2-cur]即可(cur指的是另外一边枚举的当前和)。
import itertools
n=int(input())
a=[]
for i in range(1,n+1):
    a.append(i)
suma=sum(a)

if suma%2 != 0:
    print(0)
    exit()

ans=0
object_sum=suma//2
for i in range(1,n):
    combination=itertools.combinations(a,i)
    for j in combination:
        if sum(j) == object_sum:
            ans+=1
print(ans//2)


# 43% 4TLE 暴力法 https://www.luogu.com.cn/record/169091866