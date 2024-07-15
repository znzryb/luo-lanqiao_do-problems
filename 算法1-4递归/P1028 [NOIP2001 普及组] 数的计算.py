n=int(input())
ans=0
# while n//2<=n/2:
#     ans+=n//2
#     if n//2!=0:
#         n=n//2
#     else:
#         break
# print(ans)
for i in range(1,n+1):
    if i<=n/2:
        ans+=1
    else:
        break
    for j in range(1,i+1):
        if j<=i/2:
            ans+=1
        else:
            break
        for k in range(1, j + 1):
            if k <= j / 2:
                ans += 1
            else:
                break
            for k1 in range(1, k + 1):
                if k1 <= k / 2:
                    ans += 1
                else:
                    break
                for k2 in range(1, k1 + 1):
                    if k2 <= k1 / 2:
                        ans += 1
                    else:
                        break
                    for k3 in range(1, k2 + 1):
                        if k3 <= k2 / 2:
                            ans += 1
                        else:
                            break
                        for k4 in range(1, k3 + 1):
                            if k4 <= k3 / 2:
                                ans += 1
                            else:
                                break
                            for k5 in range(1, k4 + 1):
                                if k5 <= k4 / 2:
                                    ans += 1
                                else:
                                    break
                                for k6 in range(1, k5 + 1):
                                    if k6 <= k5 / 2:
                                        ans += 1
                                    else:
                                        break
                                    for k7 in range(1, k6 + 1):
                                        if k7 <= k6 / 2:
                                            ans += 1
                                        else:
                                            break
print(ans+1)