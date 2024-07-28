# https://ac.nowcoder.com/acm/contest/86387/B
s=input()
n=len(s)
# if n%2 == 0:
i=0
j=n-1
ans=0
while i<j:
    if s[i]!=s[j]:
        ans+=min(26-abs(ord(s[i])-ord(s[j])),abs(ord(s[i])-ord(s[j])))
    i+=1
    j-=1
print(ans)

# AC