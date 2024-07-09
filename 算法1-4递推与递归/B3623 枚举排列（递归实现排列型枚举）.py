def permutation(n,k,used=[],a=[]):
    if len(a)==k:
        print(" ".join(map(str,a)))     # 记得a里元素用map变为str
        return
    for i in range(1,n+1):
        if i not in used:
            used.append(i)
            a.append(i)
            permutation(n,k,used,a)
            a.pop()
            used.pop()

n,k=map(int,input().split())

permutation(n,k)

'''
AC
'''