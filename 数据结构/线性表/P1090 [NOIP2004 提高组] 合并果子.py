n=int(input())
a=list(map(int,input().strip().split()))
a.sort()

sumA=[]
sum=0
for i in range(n):
    sum+=a[i]
    sumA.append(sum)

ans=0
for i in range(1,n):
    ans+=sumA[i]

print(ans)