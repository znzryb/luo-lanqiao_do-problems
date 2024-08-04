T=int(input())
a=[]
for i in range(T):
    a_element=[]
    a_element.append(int(input()))
    a_element+=list(map(int,input().split()))
    a.append(a_element)

for i in range(T):
    n=a[i][0]
    dp1=[_ for _ in range(n+1)]
    for j in range(n,0,-1):
        curr_len=a[i][j]
        for curr_b in range(n,0,-1):
            if curr_b-curr_len>=0:
                dp1[curr_b]=min(dp1[curr_b],dp1[curr_b-curr_len])

    if dp1[-1]!=0:
        print(-1)
    else:
        dp2=[0]+[5010]*(n)

        a[i].pop(0)
        a[i].sort()
        for j in range(n):
            curr_len=a[i][j]
            dp2[curr_len]=1
            for curr_b in range(n,0,-1):
                if curr_b-curr_len>=0:
                    dp2[curr_b]=min(dp2[curr_b],dp2[curr_b-curr_len]+1)
        print(dp2[-1])

