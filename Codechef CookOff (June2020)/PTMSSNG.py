t = int(input())
for testCase in range(t):
    n = int(input())
    list = []
    fx = {}
    fy = {}

    for __ in range((4*n)-1):
        x, y = map(int, input().rstrip().split())
        try:
            fx[x] += 1
        except KeyError:
            fx[x] = 1

        try:
            fx[x] += 1
        except KeyError:
            fx[x] = 1

        for i in fx:
            if fx[i] % 2 != 0:
                break

        for j in fy:
            if fy[i] % 2 != 0:
                break

        print(i,j)
