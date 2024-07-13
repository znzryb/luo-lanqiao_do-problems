import sys
sys.setrecursionlimit(2000000) # 增加递归深度限制
class TreeNode:
    def __init__(self,val,left=None,right=None):
        self.val = val
        self.left = left
        self.right = right

def treeDeep(tree):
    if tree is None:
        return 0
    depth_left=treeDeep(tree.left)
    depth_right=treeDeep(tree.right)
    return max(depth_left,depth_right)+1

n=int(input().strip())
a=[]
for i in range(n):
    left,right=map(int,input().strip().split())
    a.append([left,right])

Btree=TreeNode(1)
Nodes={}
Nodes[1]=Btree
for i in range(1,n+1):
    if i not in Nodes:              # 判断i是否在Nodes，光看示例有可能觉得一定在，但hack数据说明可能不在
        Nodes[i] = TreeNode(i)

    left,right=a[i-1][0],a[i-1][1]
    if left!=0 and right!=0:
        if left in Nodes:
            Nodes[i].left = Nodes[left]
        # 如果left在Nodes里，我们要避免创建两个TreeNode()，在hack数据中，是这个TreeNode(3)若不做处理会创建两次，导致3后节点丢失
        else:
            Nodes[left]=Nodes[i].left=TreeNode(left)

        if right in Nodes:
            Nodes[i].right = Nodes[right]
        else:
            Nodes[right]=Nodes[i].right=TreeNode(right)
    elif left==0 and right!=0:
        if right in Nodes:
            Nodes[i].right = Nodes[right]
        else:
            Nodes[right] = Nodes[i].right = TreeNode(right)
    elif left!=0 and right==0:
        if left in Nodes:
            Nodes[i].left = Nodes[left]
        else:
            Nodes[left] = Nodes[i].left = TreeNode(left)

depth=treeDeep(Btree)
print(depth)

'''
AC
'''