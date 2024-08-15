# https://www.luogu.com.cn/problem/AT_dfs_a
# 4 5
# s####
# ....#
# #####
# #...g
# 输出
# No
import sys
sys.setrecursionlimit(500*500)
def dfs(start_x,start_y,searched):
    if x_-1>=start_x>=0 and y_-1>=start_y>=0 and [start_x,start_y] not in searched :  # 扫到列表外要返回 或在 searched中要返回
        searched.append([start_x,start_y])
        if a[start_y][start_x]=='#':    # '#'是墙，撞到要返回
            return
        if a[start_y][start_x]=='g':
            print('Yes')
            exit()
        dfs(start_x+1,start_y,searched)
        dfs(start_x-1,start_y,searched)
        dfs(start_x,start_y+1,searched)
        dfs(start_x,start_y-1,searched)

y_,x_=map(int,input().split())
a=[]
for i in range(y_):
    a_element=list(input())
    if 's' in a_element:
        start_x=a_element.index('s')
        start_y=i
    a.append(a_element)
dfs(start_x,start_y,[])
print('No')

# https://www.luogu.com.cn/record/167889160 15#TLE
# https://atcoder.jp/contests/atc001/submissions/55887275?lang=en