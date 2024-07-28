# https://atcoder.jp/contests/abc364/tasks/abc364_c
n,x,y=map(int,input().split())
sweets=list(map(int,input().split()))
salties=list(map(int,input().split()))

# if sum(sweets) <= x:
#     print(n)
#     exit()
# elif sum(salties) <= y:
#     print(n)
#     exit()

min_sw=min(sweets)
min_sl=min(salties)
# 动态规划的滚动数组优化
if sum(sweets) <= x:
    dp_sw=[n]
else:
    dp_sw=[0]+[200000]*(x-min_sw+1)    # 题目说要exceed，所以x+1


    for i in range(n):
        sweet=sweets[i]
        for curr_x in range(x+1,min_sw-1,-1):     # 逆序遍历保证不会互相影响
            if curr_x >= sweet:
                dp_sw[curr_x-min_sw]=min(dp_sw[curr_x-min_sw],dp_sw[curr_x-sweet-min_sw]+1)

if sum(salties) <= y:
    dp_sl=[n]
else:
    dp_sl=[0]+[200000]*(y-min_sl+1)
    for i in range(n):
        salty=salties[i]
        for curr_y in range(y+1,min_sl-1,-1):
            if curr_y >= salty:
                dp_sl[curr_x-min_sl]=min(dp_sl[curr_x-min_sl],dp_sl[curr_x-salty-min_sl]+1)

print(min(dp_sl[-1],dp_sw[-1]))