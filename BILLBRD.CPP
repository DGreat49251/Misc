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
        if(x==y)
        {
            cout<<n<<" "<<n<<endl;
        }
        else
        {
            long x1,x2,x3,x4,y1,y2,y3,y4,km;
            km=k%4;
            if(x>y)
            {
                x1=n;
                x2=y+n-x;
                x3=0;
                x4=x-y;
                y1=y+n-x;
                y2=n;
                y3=x-y;
                y4=0;
                if(km==1)
                    cout<<x1<<" "<<y1<<endl;
                if(km==2)
                    cout<<x2<<" "<<y2<<endl;
                if(km==3)
                    cout<<x3<<" "<<y3<<endl;
                if(km==0)
                    cout<<x4<<" "<<y4<<endl;
            }
            else
            {
                x1=x+n-y;
                x2=n;
                x3=y-x;
                x4=0;
                y1=n;
                y2=x+n-y;
                y3=0;
                y4=y-x;
                if(km==1)
                    cout<<x1<<" "<<y1<<endl;
                if(km==2)
                    cout<<x2<<" "<<y2<<endl;
                if(km==3)
                    cout<<x3<<" "<<y3<<endl;
                if(km==0)
                    cout<<x4<<" "<<y4<<endl;
            }
        }
        t--;
    }
    return 0;
}