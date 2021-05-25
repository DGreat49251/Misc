for t in range(int(input())):             ##taking number of test cases
    n,m=map(int,input().split())          ##taking these values together and mapping them
    arr_n=list(map(int,input().split()))  ##creating two lists
    arr_m=list(map(int,input().split()))
    c=0                                   ##counting variable for counting swaps
    flag=True
    while sum(arr_n)<=sum(arr_m):         ##the very next swap will give the result in favour of john
        arr_n.sort()                      ##sorting the lists for convenient swapping
        arr_m.sort()
        if arr_n[0]<arr_m[-1]:           ##losing condition forjohn
            arr_m[-1],arr_n[0]=arr_n[0],arr_m[-1]
            c+=1
        else:
            flag=False
            print(-1)
            break                         ##coming out of the loop
    if flag==True:
        print(c)