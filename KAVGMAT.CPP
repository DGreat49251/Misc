#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        long n,m,k;
        scanf("%ld%ld%ld",&n,&m,&k);
        double arr[n+1][m+1];
        long mat_min=min(m,n), res=0;
        for(long i=0;i<=n;i++)
        {
            for(long j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    arr[i][j]=0;
                }
                else
                {
                    cin>>arr[i][j];
                }
            }
        }
        for(long i=0;i<=n;i++)
        {
            double p=0;
            for(long j=0;j<=m;j++)
            {
                arr[i][j]+=p;
                p=arr[i][j];
            }
        }
        for(long i=0;i<=m;i++)
        {
            double p=0;
            for(long j=0;j<=n;j++)
            {
                arr[j][i]+=p;
                p=arr[j][i];
            }
        }
        for(long l=1;l<=mat_min;l++)
        {
            for(long i=l;i<=n;i++)
            {
                for(long j=l;j<=m;j++)
                {
                    if((arr[i][j]+arr[i-l][j-l]-arr[i][j-l]-arr[i-l][j])/(l*l)>=k)
                    {
                        res++;
                    }
                }
            }
        }
        printf("%ld\n",res);
    }
    return 0;
}