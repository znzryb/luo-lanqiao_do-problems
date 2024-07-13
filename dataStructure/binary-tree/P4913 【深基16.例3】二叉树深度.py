import sys
sys.setrecursionlimit(2000000) # 增加递归深度限制
class TreeNode:
    def __init__(self,val,left=0,right=0):
        self.val = val
        self.left = left
        self.right = right

def treeDeep(tree):
    if tree == 0 or tree is None:
        return 0
    depth_left=treeDeep(tree.left)
    depth_right=treeDeep(tree.right)
    return max(depth_left,depth_right)+1

n=int(input())
a=[]
for i in range(n):
    left,right=map(int,input().strip().split())
    a.append([left,right])

Btree=TreeNode(1,0,0)
Nodes={}
Nodes[1]=Btree
for i in range(1,n+1):
    left,right=a[i-1][0],a[i-1][1]
    if left!=0 and right!=0:
        Nodes[i].left=TreeNode(left)
        Nodes[left]=Nodes[i].left
        Nodes[i].right=TreeNode(right)
        Nodes[right]=Nodes[i].right
    elif left==0 and right!=0:
        Nodes[i].left = 0
        Nodes[left] = Nodes[i].left
        Nodes[i].right = TreeNode(right)
        Nodes[right] = Nodes[i].right
    elif left!=0 and right==0:
        Nodes[i].left = TreeNode(left)
        Nodes[left] = Nodes[i].left
        Nodes[i].right = 0
        Nodes[right] = Nodes[i].right

depth=treeDeep(Btree)
print(depth)

'''
1 RE
'''