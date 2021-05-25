#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    scanf("%ld",&t);
    while(t>0)
    {
        scanf("%ld",&n);
        long a,b,res=0;
        if(n==1)
            res=20;
        else if(n==2)
            res=36;
        else if(n==3)
            res=51;
        else
        {
            a=n/4;
            b=n%4;
            if(b==0)
                res = 44*a + 16;
            else if(b==1)
                res = 44*a + 32;
            else if(b==2)
                res = 44*a + 44;
            else
                res = 44*a + 55;
        }
        printf("%ld\n",res);
        t--;
    }
    return 0;
}