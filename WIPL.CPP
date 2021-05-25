#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,k,s;
        cin>>n>>k;
        int h[n];
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            s+=h[i];
        }
        sort(h,h+n,greater<int>());
        if(s<(2*k) || n==1)
            cout<<-1<<endl;
        else if(s==(2*k))
        {
            if(h[0]>k)
                cout<<-1<<endl;
            else
                cout<<n;
        }
        else if(h[0]>=k && h[1]>=k)
            cout<<2<<endl;
        else if(h[0]>=k && h[1]<k)
        {
            int s1=0,i;
            for(i=1;i<n;i++)
            {
                s1+=h[i];
                if(s1>=k)
                    break;
            }
            if(s1>=k)
                cout<<i+1<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            int s1=0,s2=0,i,j;
            for(i=0;i<n;i++)
            {
                s1+=h[i];
                if(s1>=k)
                    break;
            }
            for(j=i+1;j<n;j++)
            {
                s2+=h[j];
                if(s2>=k)
                    break;
            }
            if((j+1)<=n)
                cout<<j+1<<endl;
            else
                cout<<-1<<endl;
        }
        t--;
    }
    return 0;
}