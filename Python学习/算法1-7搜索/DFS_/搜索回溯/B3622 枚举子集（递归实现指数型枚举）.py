# 输入
# 3
# 输出
# NNN
# NNY
# NYN
# NYY
# YNN
# YNY
# YYN
# YYY
global n
def f(a):
    if len(a)==n:
        print(''.join(a))
        return
    a.append('N')
    f(a)
    a.pop()
    a.append('Y')
    f(a)
    a.pop()
n=int(input())
a=[]
f(a)
