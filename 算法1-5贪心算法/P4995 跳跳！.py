n=int(input())
h=[0]+list(map(int,input().split()))
h.sort()
i=0
j=n # 注意加了一个元素
ans_list=[]
while i<=j:
    ans_list.append(h[i])
    ans_list.append(h[j])
    i+=1
    j-=1
ans=0
for i in range(n):
    ans+=int((abs(ans_list[i+1]-ans_list[i]))**2)
print(ans)
'''
AC
'''