class TreeNode:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def buildTree(inOrder, preOrder):
    if not preOrder or not inOrder:
        return None

    root_val = preOrder[0]
    root = TreeNode(root_val)

    root_index = inOrder.index(root_val)
    # because left tree in different lists is of same length, we can find the end of left tree in preOrder.
    left_preOrder = preOrder[1:root_index + 1]
    left_inOrder = inOrder[:root_index]

    right_preOrder = preOrder[root_index + 1:]
    right_inOrder = inOrder[root_index + 1:]

    root.left = buildTree(left_inOrder, left_preOrder)
    root.right = buildTree(right_inOrder, right_preOrder)

    return root


def postOrder(Btree,a):
    if Btree:
        postOrder(Btree.left,a)
        postOrder(Btree.right,a)
        a.append(Btree.val)


inOrder = input().strip()
preOrder = input().strip()
a=[]

Btree = buildTree(inOrder, preOrder)

postOrder(Btree,a)
print(''.join(a))

'''
AC
'''
