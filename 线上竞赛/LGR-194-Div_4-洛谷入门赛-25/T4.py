nPeople,mLanguage=map(int,input().split())
Laws=list(map(int,input().split()))
PeopleUses=list(map(int,input().split()))
charms=[]
for i in range(mLanguage):
    charms.append(Laws[i]*PeopleUses.count(i+1))
print(charms.index(max(charms))+1)
