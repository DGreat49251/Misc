#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t,n,s=0;
    scanf("%ld",&t);
    long arr[t];
    while (t>0)
    {
        scanf("%ld",&n);
        long double m;
        long x,s1,ans;
        s=(n*(n+1ul))/2ul;
        if(s%2!=0)
        {
            printf("0\n");
        }
        else
        {
            ans=0,s1=0;
            m=sqrtl((s*4l)+1l);
            m=m-1;
            m=m/2;
            x=floor(m);
            s1=x*(x+1)/2l;
            if(s1==s/2)
            {
                ans=(x*(x-1l)/2l)+((n-x)*(n-x-1)/2l)+(n-x);
                printf("%ld\n",ans);
            }
            else
            {
                ans=n-x;
                printf("%ld\n",ans);
            }
        }
        t--;
    }
    return 0;
}

