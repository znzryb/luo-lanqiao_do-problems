# 1 2 1 3		1表示第一门学科习题集题目数量
# 5             5第一门学科习题集第一题耗时
# 4 3
# 6
# 2 4 3
# 输出
# 20 （复习完毕最少时间）
# 左右两个大脑可以同时计算2道不同的题目，但仅限一科
# 搜索回溯

def search(x,y,left_brain,right_brain):
    # 一般来说python全局变量调用不会出问题
    # 但如果你想要在函数体里改变其值，就会出问题
    # 所以要提前声明其为全局变量
    # 全局变量要在函数体里声明
    global a
    global minn                        
    if x>=s[y]:
        minn=min(minn,max(left_brain,right_brain))
        return
    left_brain+=a[y][x]
    search(x+1,y,left_brain,right_brain)
    left_brain-=a[y][x]
    right_brain+=a[y][x]
    search(x+1,y,left_brain,right_brain)


s=list(map(int,input().split()))
a=[]
for i in range(4):
    a.append(list(map(int,input().split())))
left_brain=0
right_brain=0
ans=0
for i in range(4):
    minn=1200000    # 初始化minn，只要让minn很大就行，1200000这个值我随便设的
    search(0,i,left_brain,right_brain)
    ans+=minn
print(ans)
    
# AC https://www.luogu.com.cn/record/167499190