'''
“最小质因数 × 最大因数（非自己） = 这个合数”   线性筛/欧拉筛 原理
本代码中用pj指向最小质因数，i指向最大因数（双指针）
'''

def isprime(n,q,status_d):
   anslist=[]
   pr=1
   for i in range(2,n+1):
      if len(anslist)>=q:
         return anslist
      if status_d[i]==1:
         anslist.append(i)
      for pj in anslist:
         if i*pj>n:
            break    # i*pj 超范围，退出循环
         if i%pj==0:
            status_d[int(i * pj)]=0
            break
         else:
            status_d[int(i * pj)]=0

n,q=map(int,input().split())
status_d={}
for i in range(1,n+1):
   if i==1:
      status_d[i]=0 # 1不是素数
   else:
      status_d[i] = 1  #1 表示是素数
anslist=isprime(n,q,status_d)
for i in range(q):
   print(anslist[i])


