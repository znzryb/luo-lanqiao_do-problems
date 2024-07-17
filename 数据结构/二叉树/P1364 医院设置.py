class TreeNode:
    def __init__(self,val,people,left=None,right=None):
        self.val=val    # val 代表节点编号
        self.left=left
        self.right=right
        self.people=people
# w是人口  u是⬅左节点编号 v是右节点编号
# 这题输入如下所示
# 5						
# 13 2 3 w，u，v
# 4 0 0
# 12 4 5
# 20 0 0
# 40 0 0

def buildTree(node_dic,n,nodes):
    for i in range(1,n+1):
        w,u,v=node_dic[i][0],node_dic[i][1],node_dic[i][2]
#i 不在nodes中的情况
        if i not in nodes:
            nodes[i]=TreeNode(val=i,people=w)  #暂时让left=None，right=None
            if u != 0:
                if u in nodes:
                    
#i 在nodes中的情况
        else:

            if :

n=int(input())
node_dic={}
for i in range(1,n+1):
    w,u,v=map(int,input().strip().split())
    node_dic[i]=[w,u,v]
nodes={}