T=int(input())
a=[]
for i in range(T):
    a.append(list(map(int,input().strip().split())))
for i in range(T):
    n,k=a[i][0],a[i][1]
    t=0
    for i in range(1,n+1):
        t1=t
        t=k+t/i
        if t<t1:
            t=t1
            break
    print(round(t,1))

# AC