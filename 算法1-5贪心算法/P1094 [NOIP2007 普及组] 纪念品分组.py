w=int(input())
n=int(input())
a=[]
for i in range(n):
    G=int(input())
    a.append(G)
a.sort()
j=0
k=n-1     # 两指针
ans=0
while j<k:
    if a[j]+a[k]<=w:
        j+=1
        k-=1
        ans+=1
    else:
        k-=1
ans=n-ans
print(ans)
'''
AC
'''

#     if a[count]+a[count+1]<=w:
#         ans+=1
#         count+=2
#     else:
#         break
# ans+=n-count
