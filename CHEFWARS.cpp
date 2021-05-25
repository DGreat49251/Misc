#include<iostream>

using namespace std;

int main()
{
    long T,H,P;
    cin>>T;
    while (T>0)
    {
        cin>>H>>P;
        while (P!=0)
        {
            H=H-P;
            P=P/2;
        }
        if (H<=0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
        T--;
    }
    return 0;
}
