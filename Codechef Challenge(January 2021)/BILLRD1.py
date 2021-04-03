test = int(input())

for t in range(test):
    n = int(input())
    k = int(input())
    x = int(input())
    y = int(input())

    if x==y :
        print(n,n)
    
    else:
        list1 = []
        if x<y:
            list1 = [[x+n-y, n],[n,n-y+x],[y-x,0],[0,y-x]]
        else:
            list1 = [[n,y+n-x],[y+n-x,n],[0,x-y],[x-y,0]]
        t = list1[(k-1)%4]
        print(num[0],num[1])