n=int(input())
s_list=[]
k_split_list=[]
split_location_dic={}
for i in range(n):
    s=input()
    s_list.append(s)
    k_split=int(input())
    k_split_list.append(k_split)
    if k_split != 0:
        split_location_dic[i]=list(map(int,input().split()))

for i in range(n):
    s=s_list[i]
    k_split=k_split_list[i]
    if k_split ==0:
        if s=='respect':
            print(1)
        else:
            print(0)
    else:
        split_location=split_location_dic[i]
        ans=0
        for j in range(k_split):
            if j==0:
                if s[:split_location[j]]=='respect':
                    ans=1
            else:
                if s[split_location[j-1]:split_location[j]]=='respect':
                    ans+=1
        print(ans)