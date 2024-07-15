import math
T=int(input())
a_=[]
for i in range(T):
    a_.append(list(map(int,input().strip().split())))

def findB_optimized(a, c):
    """
    找到一个整数b，满足 b = a // n = c * m，
    其中 a 和 c 是输入，n 和 m 是正整数。

    Args:
        a: 输入整数
        c: 输入整数

    Returns:
        满足条件的整数 b，如果不存在则返回 -1
    """
    for n in range(1, a + 1):
        b = a // n
        if b % c == 0:
            return b
    return -1

for i in range(T):
    a,c=a_[i][0],a_[i][1]
    if c<=a:
        if c==a:
            print(c)    # 如果c=a，b=1*c=a/1，b=c
        else:
            print(findB_optimized(a,c))
    else:
        print(-1)
