start_s=input()
end_s=input()
ans=0
while True:
    for i in range(len(start_s)):
        if start_s[i]!=end_s[i]:
            start_s=start_s[0:i]+2*end_s[i]+start_s[i+2:]
            ans+=1
    if start_s==end_s:
        break
print(ans)