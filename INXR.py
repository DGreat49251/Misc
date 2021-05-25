def calc(x):
    a,b = 0,0
    for i in range(x+1):
        if (c & (1 << i)):
            if (i == x):
                a += (1 << i)
            else:
                b += (1 << i)
        else:
            a += (1 << i)
            b += (1 << i)
    return a*b
t = int(input())
while(t>0):
    c = int(input())
    x = -1
    for i in range(32):
        if (c & (1 << i)):
            x = i
    res = calc(x)
    print(res)
    t-=1