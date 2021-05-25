l = float(input())
b = float(input())
h = float(input())
n = float(input())
o = 0.21*l*b*h*28.3168
c1 = n*8
c = 0
cx = c1
while(cx<=o):
    cx=cx+c1
    c=c+1
c=c/24
print(c)
