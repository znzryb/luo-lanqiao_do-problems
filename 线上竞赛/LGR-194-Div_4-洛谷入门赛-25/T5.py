nPeople,mDay,checkRule=map(int,input().split())
a=[]
for i in range(mDay):
    a.append(list(map(int,input().split())))

validDay=0
for i in range(mDay):
    for j in range(nPeople):
        judge=a[i].count(checkRule)
        if judge>=nPeople/2:
            validDay+=1
if validDay>=mDay/2:
    print('YES')
else:
    print('NO')