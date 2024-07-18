# 这题思路是找出一位里，子字符串里重复元素最多的重复个数，用总的减去重复最多的元素，得到的就是这一位需要的替换次数
# 将每一位替换次数加在一起，得到的就是总替换个数
k=int(input().strip()) # 分割为多少个字符串
s=input().strip()      # 字符串输入
n=len(s)
a=[]
if n%k==0:
    cut=n//k
    for i in range(0,n-cut+1,cut):
        a.append(list(s[i:i+cut]))
else:
    print(-1)
    exit()

#               所有子字符串第0位的list
# 生成一个dif_dic，如{0: ['a', 'b'], 1: ['a', 'a'], 2: ['b', 'a']}
dif_dic={}
for i in range(cut):    
    dif_dic[i]=[]
for i in range(cut):
    for j in range(k):
        dif_dic[i].append(a[j][i])

ans=0
for i in range(cut):
    set_=set(dif_dic[i])    # 记得set是特殊名，起名不要起set，起set_
    max_intersection=0
    for j in set_:          # 这一位里，子字符串里重复元素最多的
        max_intersection=max(dif_dic[i].count(j),max_intersection)
    count=k-max_intersection
    ans+=count
print(ans)

# AC https://www.luogu.com.cn/record/166655170
