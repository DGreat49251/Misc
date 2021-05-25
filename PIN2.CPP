#include<bits/stdc++.h>

using namespace std;

long palcheck(long x)
{
    long cx=x;
    long d,nx=0;
    while (x>0)
    {
        d=x%10;
        nx=nx*10+d;
        x/=10;
    }
    if (nx==cx)
        return 1;
    else
        return 0;
}
int main()
{
    long t,n,p=0,q=1;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        long l=1,h=1;
        if (n==1)
        {
            p=1;
            cout<<p<<" "<<q<<endl;
        }
        else
        {
            for(long i=1;i<n;i++)
            {
                l*=10;
            }
            h=(l*10)-1;
            q=(h-l)+1;
            while(l<=h)
            {
                if(palcheck(l)==1)
                {
                    p++;
                }
                l++;
            }
            long u=p;
            for(long j=2; j<u; j++)
            {
                if (p%j==0 && q%j==0)
                {
                    p=p/j;
                    q=q/j;
                }
            }
            cout<<p<<" "<<q<<endl;
        }
        t--;
    }
    return 0;
}
