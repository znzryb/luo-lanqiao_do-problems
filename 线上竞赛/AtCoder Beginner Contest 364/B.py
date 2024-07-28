y_,x_=map(int,input().split())
curr_y,curr_x=map(int,input().split())
curr_y,curr_x=curr_y-1,curr_x-1
a=[]
for i in range(y_):
    a.append(list(input()))
s=input()
for i in s:
    if i=='U':
        if 0<=curr_y-1<y_:
            if a[curr_y-1][curr_x]=='.':
                curr_y-=1
    elif i=='D':
        if 0<=curr_y+1<y_:
            if a[curr_y+1][curr_x]=='.':
                curr_y+=1
    elif i=='L':
        if 0<=curr_x-1<x_:
            if a[curr_y][curr_x-1]=='.':
                curr_x-=1
    elif i=='R':
        if 0<=curr_x+1<x_:
            if a[curr_y][curr_x+1]=='.':
                curr_x+=1

print(curr_y+1,curr_x+1)
