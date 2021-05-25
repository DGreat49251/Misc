#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t>0)
    {
        long n,k,x,y;
        cin>>n>>k>>x>>y;
        long z,flag=0;
        if(k==0)
        {
            if(x==y)
                flag=1;
            else
                flag=0;
        }
        else
        {
            long xx,t=999;
            while(t>0)
            {
                xx=(x+k)%n;
                if(xx==y)
                {
                    flag=1;
                    break;
                }
                x=xx;
                t--;
            }
        }
        if (flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        t--;
    }
    return 0;
}
