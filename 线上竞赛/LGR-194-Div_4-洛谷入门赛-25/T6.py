n=int(input())
a={}
for i in range(n):
    process=list(map(int,input().split()))
    Nfriend=process.pop(0)
    if Nfriend!=0:
        a[i+1]=process
for i in range(n):
    ans=0
    process=a.get(i+1,0)
    if process!=0:
        ans=len(a.get(i+1,0))
        for j in process:
            if a.get(j,0)!=0:
                ans+=len(a.get(j,0))
            else:
                ans+=0
        print(ans,end=' ')
    else:
        print(ans,end=' ')