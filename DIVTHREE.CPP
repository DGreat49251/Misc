#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t>0)
    {
        long n,k,d;
        cin>>n>>k>>d;
        long a[n],tot=0,max;
        for(long i=0; i<n; i++)
        {
            cin>>a[i];
            tot+=a[i];
        }
        if(tot<k)
        {
            max=0;
        }
        else
        {
            max=tot/k;
            if(max>d)
            {
                max=d;
            }
        }
        cout<<max<<endl;
        t--;
    }
    return 0;
}