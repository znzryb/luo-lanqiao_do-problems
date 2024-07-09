n=int(input())
a=[]
jj_list=[]  # 将军默契值list
for i in range(n):
    jj_list.append([])
for i in range(n-1):
    a=list(map(int, input().split()))
    for j in range(i+1,n):
        jj_list[j].append(a[j-i-1])
    jj_list[i]=jj_list[i]+[0]+a
jj_list[n-1].append(0)
# 以上在进行数据处理，即将每行存储与一个列表中
sub_max=[]  # 每行次大的value列表
# 以下for循环旨在生成每行次大的列表sub_max,进而得到sub_max_max（次大里最大的）
for i in jj_list:
    i_sort=sorted(i)    # 注意为指针型赋值，不能用.sort()
    sub_max.append(i_sort[-2])
sub_max_max=max(sub_max)
# 得到sub_max_max的行和列
line_submm=sub_max.index(sub_max_max)
column_submm=jj_list[line_submm].index(sub_max_max)
# 旨在生成index_1（我选完第一次后，机器会选的武将索引，即此行中的最大值） index_2（同理）
index_1=jj_list[line_submm].index(max(jj_list[line_submm]))
b3_max=sorted(jj_list[line_submm])[-3]
b3_max_index=jj_list[line_submm].index(b3_max)
for_c=jj_list[column_submm]
for_c.remove(sub_max_max)   #
c1_max=sorted(jj_list[column_submm])[-1]
c1_max_index=jj_list[column_submm].index(c1_max)
if b3_max>c1_max:
    index_2=b3_max_index
else:
    index_2=c1_max_index

if jj_list[index_2][index_1]>sub_max_max:
    print(0)
else:
    print(1)
print(sub_max_max)
# index_2=jj_list[line_submm].index(sub_max_max)
'''
AC
'''