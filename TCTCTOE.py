def count(ch):
    c = 0
    for i in range(3):
        for j in range(3):
            if l[i][j] == ch:
                c += 1
    return c


def win(li, ch):
    w = 0
    if li[0][0] == ch and li[0][1] == ch and li[0][2] == ch:
        w = 1
    if li[1][0] == ch and li[1][1] == ch and li[1][2] == ch:
        w = 1
    if li[2][0] == ch and li[2][1] == ch and li[2][2] == ch:
        w = 1
    if li[0][0] == ch and li[1][0] == ch and li[2][0] == ch:
        w = 1
    if li[0][1] == ch and li[1][1] == ch and li[2][1] == ch:
        w = 1
    if li[0][2] == ch and li[1][2] == ch and li[2][2] == ch:
        w = 1
    if li[0][0] == ch and li[1][1] == ch and li[2][2] == ch:
        w = 1
    if li[0][2] == ch and li[1][1] == ch and li[2][0] == ch:
        w = 1
    return w


t = int(input())
while(t > 0):
    cx, co, n, wx, wo, l = 0, 0, 0, 0, 0, []
    for i in range(3):
        tic = input()
        l.append(tic)
    cx = count('X')
    co = count('O')
    n = count('_')
    wx = win(l, 'X')
    wo = win(l, 'O')
    if (wx == 1 and wo == 1) or (cx-co < 0) or (cx-co > 1):
        print(3)
    elif cx == 0 and co == 0 and n == 9:
        print(2)
    elif wx == 1 and wo == 0 and cx > co:
        print(1)
    elif wx == 0 and wo == 1 and cx == co:
        print(1)
    elif wx == 0 and wo == 0 and n == 0:
        print(1)
    elif wx == 0 and wo == 0 and n > 0:
        print(2)
    else:
        print(3)
    t = t-1