n=int(input())
a=[]
for i in range(n):
    a.append(input())
dont_eat=[]
for i in range(1,n):
    if a[i]==a[i-1] and a[i]=='sweet' and i!=n-1:
        print('No')
        exit()

print('Yes')