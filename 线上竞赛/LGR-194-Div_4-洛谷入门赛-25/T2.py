x,y,z,w=map(int,input().split())
if z!=0 and w!=0:
    if x/z == y/w and x%z==0 and y%w==0:
        print(x//z)
    else:
        print(-1)
elif z!=0 and w==0:
    if y==0:
        if x%z==0:
            print(x//z)
        else:
            print(-1)
    else:
        print(-1)
elif z==0 and w!=0:
    if x==0:
        if y%w==0:
            print(y//w)
        else:
            print(-1)
    else:
        print(-1)
else:
    print(-1)