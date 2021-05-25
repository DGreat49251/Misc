letters=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p']
for t in range(int(input())):
    n=int(input())
    code=''
    s=input()
    for i in range(0,n-3,4):
        code=code+(letters[int(s[i:i+4],2)])
    print(code)