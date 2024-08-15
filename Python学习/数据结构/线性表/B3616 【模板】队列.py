n=int(input().strip())
a=[]
queue=[]
for i in range(n):
    a.append(list(map(int,input().strip().split())))
for i in range(n):
    if a[i][0] == 1:            # push操作
        queue.append(a[i][1])
    elif a[i][0] == 2:          # pop操作
        if queue != []:
            queue.pop(0)
        else:
            print('ERR_CANNOT_POP')
    elif a[i][0] == 3:
        if queue != []:
            print(queue[0])
        else:
            print('ERR_CANNOT_QUERY')
    else:
        print(len(queue))

# AC