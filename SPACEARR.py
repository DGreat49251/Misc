def possible(arr):
    for i in range(n):
        if (arr[i]>i+1):
            return False
            break
        else:
            return True
t = int(input())
while(t>0):
    n = int(input())
    a = [int(i) for i in input().split()][:n]
    a.sort()
    sa = sum(a)
    sr = (n*(n+1))/2
    if possible(a)==False:
        print("Second")
    else:
        if ((sr-sa)%2==0):
            print("Second")
        else:
            print("First")
    t-=1
