def take_string():
    y=input().split()
    return y
def take_num():
    x=int(input())
    return x
def unique(l1,l2):
    s=len(set(l1+l2))
    return s
def result(x):
    print(x)
for t in range(int(input())):
    n=take_num()
    s=take_string()
    b={}
    res=0
    for i in s:
        p=i[1:]
        if p in b:
            b[p].append(i[0])
        else:
            b[p]=[i[0]]
    b1=list(b.keys())
    for i in range(len(b)):
        for j in range(i+1,len(b)):
            temp=unique(b[b1[i]],b[b1[j]])
            res+=(temp-len(b[b1[i]]))*(temp-len(b[b1[j]]))
    res=2*res
    result(res)