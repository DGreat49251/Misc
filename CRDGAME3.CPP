#include<iostream>

using namespace std;

int main()
{
    long T,PC,PR,ndc=1,ndr=1;
    cin>>T;
    while (T>0)
    {
        cin>>PC>>PR;
        if(PC%9==0)
            ndc=PC/9;
        else
            ndc=(PC/9)+1;
        if(PR%9==0)
            ndr=PR/9;
        else
            ndr=(PR/9)+1;
        if (ndc<ndr)
            cout<<0<<" "<<ndc<<endl;
        else
            cout<<1<<" "<<ndr<<endl;
        T--;
    }
    return 0;
}
