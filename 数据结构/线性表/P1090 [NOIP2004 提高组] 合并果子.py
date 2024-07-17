# 其实这题思路是这样的，如1，2，3，4，5
# 如果 先选合起来最小的合起来，为3，3，4，5
# 接着重复以上操作6，4，5
# 10，5
# 15
import bisect

n=int(input())
a=list(map(int,input().strip().split()))
a.sort()

ans=0
for i in range(n-1): #
    sum2=a[0]+a[1]
    ans+=sum2
    if a!=[]:
        a.pop(0)
    if a!=[]:
        a.pop(0)
    index=bisect.bisect_left(a,sum2)
    a.insert(index,sum2)
print(ans)

# AC

