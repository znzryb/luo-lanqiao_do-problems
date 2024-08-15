# 输入数据树状图 https://cdn.luogu.com.cn/upload/image_hosting/26gqjntm.png
# 题解参考：https://www.luogu.com.cn/problem/solution/P1216
# 5
# 7
# 3 8
# 8 1 0
# 2 7 4 4
# 4 5 2 6 5 
# 输出 30    7→3→8→7→5 = 30
# 思路是从下往上，2->4/2->5,一定选2->5，从下往上减少决策树
# 从底至顶，即是动态规划的精髓
r=int(input())
a=[]
for i in range(r):
    a.append(list(map(int,input().split())))
for i in range(r-2,-1,-1):
    for j in range(i+1):      #第i行确实就有i个数据，但因为i是索引，所以加1
        maxNode=max(a[i][j]+a[i+1][j],a[i][j]+a[i+1][j+1])
        a[i][j]=maxNode
print(a[0][0])

# AC https://www.luogu.com.cn/record/167285938