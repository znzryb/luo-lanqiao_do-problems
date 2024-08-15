n=int(input())
n1=2**n
a=list(map(int,input().strip().split()))
# 理论上这题应该用循环，我可能想练练递归，所以用了递归，其实循环更简单
def findSecond(a,n1):
    if len(a)==2:
        return a
    b=a.copy()                              # 记得.copy()，别不加括号
    for i in range(0,n1,2):
        left,right=a[i],a[i+1]
        b.pop(b.index(min(left,right)))
# 若不用变量c接住，会导致函数返回None     
    c=findSecond(b,n1//2)                     # 记得 n1//2
    return c

Second=min(findSecond(a,n1))
print(a.index(Second)+1)    # 返回索引，要位置，所以+1

'''
AC
'''

