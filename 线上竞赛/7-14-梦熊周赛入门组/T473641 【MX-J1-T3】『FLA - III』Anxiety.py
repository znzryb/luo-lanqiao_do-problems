# class TreeNode:
#     def __init__(self,val,w,left=None,right=None):
#         self.val=val
#         self.w=w
#         self.left=left
#         self.right=right

n,m=map(int,input().split())
a_=list(map(int,input().strip().split()))
m_=[]
for i in range(m):
    m_.append(list(map(int,input().strip().split())))
for i in range(m):
    x,y,k=m_[i][0],m_[i][1],m_[i][2]
    valid_node=[]
    for j in range(k):
        if 