m,n=map(int,input().strip().split())
a=list(map(int,input().strip().split()))

# set(a)后可直接去重，形成集合，但不是这题想要的

ans=0
mem=[]
for i in a:
    if i not in mem:
        ans+=1
        mem.append(i)
        if len(mem)>m:
            mem.pop(0)  # 注意python pop队尾，而非队首
print(ans)