import math
T=int(input())
a_=[]
for i in range(T):
    a_.append(list(map(int,input().strip().split())))

def findB(a,c):
    for n in range(1,a+2):
            a_n=math.floor(a/n)
            for m in range(1,a//c+1):
                if a_n==math.floor(c*m):
                    b=a_n
                    return(b)
    return(-1)
                    
for i in range(T):
    a,c=a_[i][0],a_[i][1]
    if c<=a:
        if c==a:
            print(c)    # 如果c=a，b=1*c=a/1，b=c
        else:
            print(findB(a,c))
    else:
        print(-1)

# 60%测试数据，6AC，4TLE