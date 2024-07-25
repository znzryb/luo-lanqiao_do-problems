# https://www.luogu.com.cn/problem/P1049
v = int(input())
n = int(input())
a=[]
for i in range(n):
    a.append(int(input()))
dp=[_ for _ in range(v+1)] 

for curr_item_index in range(n):
    curr_item_volume = a[curr_item_index]
    for curr_bag_volume in range(v,0,-1):
        if curr_bag_volume >= curr_item_volume:
    # 这个问题可以这么理解  该空最优值 = min(不考虑该物体最优值，考虑该物体最优值)  考虑该物体剩余空间的最佳解（背包容量剩余最小）
            # if (curr_bag_volume-curr_bag_volume)-dp[curr_bag_volume-curr_item_volume] >= 0 :
            dp[curr_bag_volume] = min(dp[curr_bag_volume],dp[curr_bag_volume-curr_item_volume])

print(dp[-1])