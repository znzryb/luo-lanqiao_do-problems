import bisect
n=int(input().strip())
# set.union() 集合并集操作
t=[]
nation=[]
for i in range(n):
    a=list(map(int,input().strip().split()))
    t.append(a[0])
    a.pop(0)
    a.pop(0)    #不要忘记第二位是乘客总数k，不要计入国籍统计（记住不要pop(1)）
    nation.append(set(a))

for i in range(n):
    ans_set=nation[i]
    ti=t[i]
    start=bisect.bisect_left(t,ti-86400)  #如果 x 已经在 a 里存在，那么插入点会在已存在元素之前（也就是左边）
    for j in range(start,i):
        if ti-86400<t[j]<=ti:
            ans_set=set.union(ans_set,nation[j])
    print(len(ans_set))

# 能过70%评测数据，正解为优先队列
