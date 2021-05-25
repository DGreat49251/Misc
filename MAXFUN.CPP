#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t,n,o;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        long a[n];
        for(long i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        o=(a[n-1]-a[0])*2;
        cout<<o<<endl;
        t--;
    }
}