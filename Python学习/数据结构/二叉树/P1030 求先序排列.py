# 这题输入是一个中序，一个后序
class TreeNode:
    def __init__(self,val,left=None,right=None):
        self.val=val
        self.left=left
        self.right=right

def buildTree(inOrder,postOrder):
    if postOrder =='' or inOrder =='':        # 要加这个判断，否则会报错
        return None                         # 若无inOrder，说明上一节点已经是叶子节点，其left/right返回None。                       
    root_val=postOrder[-1]
    root_index=inOrder.index(root_val)
    root=TreeNode(root_val)
#               F
#              / \
#             B   G
#            / \   \
#           A   D   I
#              / \  /
#             C   E H
#
# F, B, A, D, C, E, G, I, H.   先序  root，左子树，右子树
# A, B, C, D, E, F, G, H, I.   中序  左子树，root，右子树
# A, C, E, D, B, H, I, G, F.   后序  左子树，右子树，root
# 因为无论什么顺序遍历，左子树右子树长度相等，故而可用中序中的root index 分割后序或先序中的左右子树


    left_inOrder=inOrder[:root_index]
    right_inOrder=inOrder[root_index+1:]

    left_postOrder=postOrder[:root_index]
    right_postOrder=postOrder[root_index:-1]


    root.left=buildTree(left_inOrder,left_postOrder)
    root.right=buildTree(right_inOrder,right_postOrder)
    
    return root

def preOrder(Btree):
    if Btree is not None:       # 要加这层判断，因为会遍历到None
        print(Btree.val,end='') # 输出与输入一样，要求无缝衔接
        preOrder(Btree.left)
        preOrder(Btree.right)

inOrder=input().strip()         # 输入一个中序BADC 
postOrder=input().strip()       # 输入一个后序BDCA
Btree=buildTree(inOrder,postOrder)
preOrder(Btree)
