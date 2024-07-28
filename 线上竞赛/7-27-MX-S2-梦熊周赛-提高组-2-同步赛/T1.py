from collections import Counter
# bisect.bisect_right(a, x, lo=0, hi=len(a))¶

# 输入处理
n = int(input())
s = input()
length = len(s)

# 获取所有可能的子段长度
all_son_lens = [i for i in range(1, length + 1) if length % i == 0]

# 初始化答案为字符串长度
ans = length

if length<=500:
    # 遍历每个子段长度
    for i in all_son_lens:
        # 存储每个位置上的字符
        dic_sons = {j: [] for j in range(i)}
        
        # 填充字典
        for j in range(0, length, i):
            son_s = s[j:j + i]
            for k in range(i):
                dic_sons[k].append(son_s[k])
        
        # 计算需要的操作次数
        operate_time = 0
        for v in dic_sons.values():
            counts = Counter(v)
            max_count = max(counts.values())
            operate_time += len(v) - max_count
        
        # 如果操作次数在允许范围内，更新最小子段长度
        if operate_time <= n:
            ans = min(ans, i)
            print(ans)
            exit()
    print(ans)


# 下面为正统二分法，但不知道为什么有些数据过不了
else:
    ip,jp=0,len(all_son_lens)

    # 遍历每个子段长度
    while ip<=jp:       # i pointer 和 j pointer 简称
        m1=(ip+jp)//2
        m=all_son_lens[(ip+jp)//2]
        # 存储每个位置上的字符
        dic_sons = {j: [] for j in range(m)}
        
        # 填充字典
        for j in range(0, length, m):
            son_s = s[j:j + m]
            for k in range(m):
                dic_sons[k].append(son_s[k])
        
        # 计算需要的操作次数
        operate_time = 0
        for v in dic_sons.values():
            counts = Counter(v)
            max_count = max(counts.values())
            operate_time += len(v) - max_count
        
        # 如果操作次数在允许范围内，更新最小子段长度
        
        if operate_time <= n:
            if m==1:
                ans=1
                break
            elif m==length:
                ans=length
                break
            ans = min(ans, m)
            jp=m1-1
        
        else:
            ip=m1+1
    print(ans)



# from collections import Counter

# # 输入处理
# n = int(input())
# s = input()
# length = len(s)

# # 获取所有可能的子段长度
# all_son_lens = [i for i in range(1, length + 1) if length % i == 0]

# # 初始化答案为字符串长度
# ans = length

# # 遍历每个子段长度
# for i in all_son_lens:
#     # 存储每个位置上的字符
#     dic_sons = {j: [] for j in range(i)}
    
#     # 填充字典
#     for j in range(0, length, i):
#         son_s = s[j:j + i]
#         for k in range(i):
#             dic_sons[k].append(son_s[k])
    
#     # 计算需要的操作次数
#     operate_time = 0
#     for v in dic_sons.values():
#         counts = Counter(v)
#         max_count = max(counts.values())
#         operate_time += len(v) - max_count
    
#     # 如果操作次数在允许范围内，更新最小子段长度
#     if operate_time <= n:
#         ans = min(ans, i)
#         print(ans)
#         exit()
# print(ans)



# n=int(input())
# s=input()
# length=len(s)
# all_son_lens=[]
# for i in range(1,length+1):
#     if length%i == 0:
#         all_son_lens.append(i)


# ans=length
# for i in all_son_lens:
#     dic_sons={}
#     for _ in range(i):
#         dic_sons[_]=[]
#     for j in range(0,length//i):
#         son_s=s[j*i:j*i+i]
#         for k in range(0,i):
#             dic_sons[i].append(son_s[k])
#         operate_time=0
#     for v in dic_sons.values():
#         operate_time+=len(set(v))-1
#     if operate_time <= n:
#         ans=min(ans,i)
#         print(ans)
#         exit()

