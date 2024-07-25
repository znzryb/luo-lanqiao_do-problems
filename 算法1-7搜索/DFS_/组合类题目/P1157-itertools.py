# https://www.acwing.com/problem/content/description/95
import itertools
n,k=map(int,input().split())
a=[]
for i in range(1,n+1):
    a.append(i)
combinations=itertools.combinations(a,k)
for combo in combinations:
    print('  ',end='')
    print('  '.join(map(str,combo)))
# 可以AC ac wing 那道，洛谷不知道为什么不行
# https://www.luogu.com.cn/record/167658861