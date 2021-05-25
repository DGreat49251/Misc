#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        long arr[n],res=0;
        if(n==0)
        {
            cout<<0<<endl;
        }
        else
        {
            long val=-1;
            for(long i=0;i<n;i++)
            {
                    cin>>arr[i];
            }
            sort(arr,arr+n);
            for(long i=0;i<n;i++)
            {
                if(arr[i]!=0)
                {
                    val=i;
                    break;
                }
            }
            if(val==-1)
            {
                cout<<0<<endl;
            }
            else
            {
                long b[n-val];
                for(long i=0;i<n-val;i++)
                {
                    b[i]=arr[val+i];
                }
                unordered_set <long> s;
                for(long i=0;i<n-val;i++)
                {
                    if(s.find(b[i])==s.end())
                    {
                        s.insert(b[i]);
                        res++;
                    }
                }
                cout<<res<<endl;
            }
        }
        t--;
    }
    return 0;
}
