#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        long arr[n],carr[n],cz=0;
        for(long i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                cz+=1;
            }
            carr[i]=0;
        }
        if(cz==n)
        {
            cout<<1<<" "<<1<<endl;
        }
        else
        {
            long c=0;
            while(c!=n)
            {
                for(long int i=c+1;i<n;i++)
                {
                    if(arr[c]>arr[i])
                    {
                        carr[c]+=1;
                        carr[i]+=1;
                    }
                }
                c=c+1;
            }
            for(long i=0;i<n;i++)
            {
                carr[i]+=1;
            }
            sort(carr,carr+n);
            cout<<carr[0]<<" "<<carr[n-1]<<endl;
        }
        t--;
    }
    return 0;
}
