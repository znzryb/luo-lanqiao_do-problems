sum_milk,n=map(int,input().split())
a=[]
for i in range(n):
    price,max_milk=map(int,input().split())
    a.append([price,max_milk])
a.sort(key=lambda x:x[0])
ans=0
purchase_milk=0
for j in a:
    if purchase_milk+j[1]<=sum_milk:
        purchase_milk+=j[1]
        ans+=j[1]*j[0]
    else:
        ans+=j[0]*(sum_milk-purchase_milk)
        break
print(ans)
'''
AC
'''