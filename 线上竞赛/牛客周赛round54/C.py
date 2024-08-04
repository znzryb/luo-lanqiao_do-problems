# import bisect
n,m=map(int,input().split())
a=list(map(int,input().split()))
ans=0
for i in range(1,m+1):
    counti=a.count(i)
    if counti==0:
        break
    ans+=counti
print(ans)

