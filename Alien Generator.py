from sys import stdin, stdout
t=int(stdin.readline())
for i in range(1,t+1):
    g=int(stdin.readline())
    count = 0 
    for k in range(1,g+1):
        s=0
        for q in range(k,g+1):
            s+=q
            if(s<g):
                continue
            if(s==g):
                count+=1
                break
    stdout.write("Case #"+str(i)+": "+str(count)+"\n")