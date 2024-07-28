# https://ac.nowcoder.com/acm/contest/86387/D
y_,x_=map(int,input().split())
a=[]
for i in range(y_):
    a.append(list(map(int,input().split())))

target=int(input())

dp=set()   # 这个dp表(集合)很简单，就是把所有可能的难度总和全部加到表里

for i in range(y_):
    need_update=[]
    need_remove=[]
    if i==0:
        dp.update(a[i])
        # for j in range(x_):
        #     dp.update(a[i])
    else:
        for j in range(x_):
            for k in dp:
                # dp.remove(k)
                
                need_update.append(a[i][j]+k)
        dp=set()
        dp.update(need_update)

ans=10**6
for i in dp:
    ans=min(abs(i-target),ans)

print(ans)