#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin>>t;     //INPUT FOR NUMBER OF TEST CASES
    while(t>0)
    {
        long n,k,c=0;
        cin>>n>>k;  //FIRST INPUT LINE FOR EACH TEST CASE
        long q[n];
        for(long i=0;i<n;i++)
        {
            cin>>q[i];      //SECOND INPUT LINE FOR EACH TEST CASE
        }
        long j;
        for(j=0;j<n;j++)
        {
            if(q[j]>(k-1))
            {
                c++;
                q[j+1]=q[j+1]+(q[j]-k);
            }
            if(q[j]<k)
                break;
        }
        if(j==n)
            c=c+((q[n-1]-k)/k);
        cout<<c+1<<endl;    //OUTPUT FOR EACH TEST CASE
        t--;
    }
    return 0;
}
