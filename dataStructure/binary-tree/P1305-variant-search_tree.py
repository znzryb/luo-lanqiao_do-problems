class TreeNode:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


n = int(input())
a = []
for i in range(n):
    val, left, right = input().strip()
    a.append([val, left, right])

treeNode_dic = {}
for i in range(n):
    if i == 0:
        if a[i][1] != '*' and a[i][2] != '*':
            Btree = TreeNode(a[i][0], TreeNode(a[i][1]), TreeNode(a[i][2]))
            treeNode_dic[a[i][0]], treeNode_dic[a[i][1]], treeNode_dic[a[i][2]] = Btree,Btree.left,Btree.right  # nodes' position
        elif a[i][1] == '*':
            Btree = TreeNode(a[i][0], None, TreeNode(a[i][2]))
            treeNode_dic[a[i][0]], treeNode_dic[a[i][2]] = Btree,Btree.right
        elif a[i][2] == '*':
            Btree = TreeNode(a[i][0],TreeNode(a[i][1]), None)
            treeNode_dic[a[i][0]], treeNode_dic[a[i][1]] = Btree,Btree.left
        else:
            print(a[i][0])      # in the problem's task doesn't have first line is 'a**', so this just refrain from task like this disturbing the code running
            exit()
    else:
        if a[i][1] != '*' and a[i][2] != '*':
            treeNode_dic[a[i][0]].left = TreeNode(a[i][1])
            treeNode_dic[a[i][0]].right = TreeNode(a[i][2])
            treeNode_dic[a[i][1]], treeNode_dic[a[i][2]] = treeNode_dic[a[i][0]].left, treeNode_dic[a[i][0]].right  #
        elif a[i][1] == '*' and a[i][2]!='*':
            treeNode_dic[a[i][0]].right = TreeNode(a[i][2])
            treeNode_dic[a[i][2]] = treeNode_dic[a[i][0]].right
        elif a[i][2] == '*' and a[i][1]!='*':
            treeNode_dic[a[i][0]].left = TreeNode(a[i][1])
            treeNode_dic[a[i][1]] = treeNode_dic[a[i][0]].left
def searchTree(tree,val):
    if tree:
        if tree.val==val:
            return tree
        searchTree(tree.left,val)
        searchTree(tree.right,val)
searchTree(Btree,'b')

'''
this code does not need output, just using debug to check the return (TreeNode)
'''