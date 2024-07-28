# 思路其实就是
# 【牛客周赛53题目讲解】 https://www.bilibili.com/video/BV1Gw4m1k7xc
n=int(input())
s=input()
x_11,y_01,z_00=map(int,input().split())


count0=0
ans=0
for i in range(n):
    if s[i]=='0':
        count0+=1
    else:
        if count0>0:
            count0-=1
            ans+=1
print(min(ans,y_01))

