# https://www.luogu.com.cn/problem/P1060
maxMoney,n_item=map(int,input().split())
price_impls=[]
for i in range(n_item):
    price_impls.append(list(map(int,input().split())))

dp=[0]*(maxMoney+1)
for i in range(n_item):
    item_price=price_impls[i][0]
    item_impls=price_impls[i][1]
    for curr_money in range(maxMoney,0,-1):
        if curr_money >= item_price:
            dp[curr_money]=max(dp[curr_money],dp[curr_money-item_price]+item_impls*item_price)
print(dp[-1])

# AC https://www.luogu.com.cn/record/168292395