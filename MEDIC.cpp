#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y,m,d,t;
    int tdy,tdm,ndl;
    char a,b;
    cin>>t;
    while(t>0)
    {
        cin>>y>>a>>m>>b>>d;
        if(m!=2)
        {
            if(m==1 && m==3 && m==5 && m==7 && m==8 && m==10 && m==12)
            {
                tdm=31;
            }
            else
            {
                tdm=30;
            }
        }
        else
        {
            if (y%100!=0)
            {
                if (y%4==0 || y%400==0)
                {
                    tdm=29;
                }
                else
                {
                    tdm=28;
                }
            }
            else
            {
                tdm=28;
            }
        }
        ndl=
    }
    return 0;
}
