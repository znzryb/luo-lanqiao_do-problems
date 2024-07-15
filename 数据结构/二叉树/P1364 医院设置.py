class TreeNode:
    def __init__(self,val,people,left=None,right=None):
        self.val=val    # val 代表节点编号
        self.left=left
        self.right=right
        self.people=people
# w是人口  u是⬅左节点编号 v是右节点编号
n=int(input())
node_dic={}
for i in range(1,n+1):
    w,u,v=map(int,input().strip().split())
    node_dic[i]=[w,u,v]
    

def buildTree(node_dic,n,nodes):
    for i in range(1,n+1):
        w,u,v=node_dic[i][0],node_dic[i][1],node_dic[i][2]
#i 不在nodes中的情况
        if i not in nodes:
            if u not in nodes and v not in nodes:
                nodes[i]=TreeNode(val=i,people=w,left=TreeNode(u),right=TreeNode(v))
            elif u in nodes and v not in nodes:
                nodes[i]=TreeNode(val=i,people=w,left=nodes[u],right=TreeNode(u))
            elif u not in nodes and v in nodes:
                nodes[i]=TreeNode(val=i,people=w,left=)
            else:
#i 在nodes中的情况
        else:
            if:


nodes={}