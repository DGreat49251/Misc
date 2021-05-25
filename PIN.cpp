#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,p=1,q=1;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        if(n>1)
        {
            if (n%2==0)
                q=pow(10,(n-(n/2)));
            else
                q=pow(10,(n-((n+1)/2)));
            cout<<p<<" "<<q<<endl;
        }
        else
        {
            cout<<p<<" "<<q<<endl;
        }
        t--;
    }
    return 0;
}
