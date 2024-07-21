n=int(input())
a=[]
for i in range(n):
    k,v=map(int,input().split())
    a.append(v/k)
ans=a.index(max(a))+1
print(ans)
