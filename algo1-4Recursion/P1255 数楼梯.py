import sys
sys.setrecursionlimit(10000) # 增加递归深度限制
mem={}
def count(n,mem):
    if n == 1:
        mem[1]=1
        return 1
    elif n == 2:
        mem[2]=2
        return 2
    else:
        if n in mem:
            return mem[n]
        else:
            mem[n]=count(n - 1, mem) + count(n - 2, mem)
            return mem[n]

n = int(input())
print(count(n,mem))
'''
AC
'''