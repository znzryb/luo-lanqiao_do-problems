class TreeNode:
    def __init__(self, val, left=None, right=None):
        self.val, self.left, self.right = val, left, right

def getChild(val):
    node, left, right = input().strip()
    val = val
    root = TreeNode(node)
    if left != '*':
        root.left = getChild(left)
    if right != '*':
        root.right = getChild(right)
    return root
def build_tree():
    node, left, right = input().strip()
    root = TreeNode(node)
    if left != '*':
        root.left = getChild(left)
    if right != '*':
        root.right = getChild(right)
    return root

def search_tree(root,str):
    if root:
        if root.val == str: return root
        preorder(root.left)
        preorder(root.right)

def preorder(root):
    if root:
        print(root.val, end='')
        preorder(root.left)
        preorder(root.right)

n=int(input())
preorder(build_tree())
print()