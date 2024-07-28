# 输出最小所需接口大小，既然是要输出最小的文件大小，就要对文件大小排序，谨记
n,p,s=map(int,input().split())
size_values=[]
for i in range(n):
    size_values.append(list(map(int,input().split())))

size_values.sort(key=lambda x:x[0])
dp=[0]*(s+1)

for i in range(n):
    size=size_values[i][0]
    value=size_values[i][1]
    for curr_s in range(s,0,-1):
        if curr_s >= size:
            dp[curr_s]=max(dp[curr_s],dp[curr_s-size]+value)
    if dp[-1] >= p:
        print(size)
        exit()
print('No Solution!')

# AC https://www.luogu.com.cn/record/169083071





# dp={}
# for i in range(p+1):
#     if i==0:
#         dp[i]=[0,0]
#     else:
#         dp[i]=[1001,1001]
# # dp=[0]+[1001]*(p)
# size_values.sort(key=lambda x:x[1])

# for i in range(n):
#     size=size_values[i][0]
#     value=size_values[i][1]
#     for curr_v in range(p,0,-1):
#         if curr_v >= value:
#             if dp[curr_v-value][1]+size <= s:
#                 dp[curr_v][0]=min(dp[curr_v][0],max(dp[curr_v-value][0],size))
#             dp[curr_v][1]=min(dp[curr_v-value][1]+size,dp[curr_v][1])
#         else:
#             dp[curr_v][0]=min(dp[curr_v][0],size)
            
# if dp[p][1]<=s:
#     print(dp[p][0])
# else:
#     print('No Solution!')




# # 输出最小所需接口大小
# n,p,s=map(int,input().split())
# size_values=[]
# for i in range(n):
#     size_values.append(list(map(int,input().split())))

# dp={}
# for i in range(0,s+1):
#     dp[i]=[0,0]         # 第一个表示value，第二个表示达到此的最大文件大小

# for i in range(n):
#     size=size_values[i][0]
#     value=size_values[i][1]
#     for curr_size in range(s,0,-1):
#         if curr_size >= size:
#             if dp[curr_size-size][0]+value >= dp[curr_size][0]:
#                 dp[curr_size][0]=dp[curr_size-size][0]+value
#                 dp[curr_size][1]=max(size,dp[curr_size-size][1])

# if dp[s][0]<p:
#     print('No Solution!')
#     exit()
# for i in range(1,s+1):
#     if dp[i][0] >= p:
#         print(dp[i][1])
#         break
