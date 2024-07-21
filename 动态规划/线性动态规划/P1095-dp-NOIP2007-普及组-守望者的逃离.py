# 39 200 4 魔法初值 距离 时间 https://www.luogu.com.cn/problem/P1095
# 输出
# No
# 197 最大移动距离
# Yes
# 6   最少逃出时间
# 决策：闪-消耗10M，一秒内移动60 跑-一秒内移动17 停-恢复4M 每秒
# 可以换一种想法，闪和跑分别进行，然后取最优（有点像基于时间轴的dp）

m,s,t=map(int,input().split())
s1=[0]  # 存放i时刻闪走的距离
s2=[0]  # 存放i时刻跑走的距离
for i in range(t):
    s1I=s1[i]
    s2I=s2[i]
    if m>=10:
        m-=10
        s1.append(s1I+60)
    else:
        m+=4
        s1.append(s1I)
    if s2I+17 < s1[-1]:
        # s2=s1[:] 直接copy会MLE
        s2.append(s1[-1])
    else:
        s2.append(s2I+17)
    if s1[-1]>=s or s2[-1]>=s:    # 若把这个判断放在前面会造成80%  https://www.luogu.com.cn/record/167349830
                                #因为有的时候会输出No 60 这样的神奇结果 
                                #具体解释见 https://github.com/znzryb/luo-lanqiao_do-problems/issues/11
        print('Yes')
        print(i+1)
        exit()
print('No')
print(max(s1[-1],s2[-1]))

# AC https://www.luogu.com.cn/record/167350457