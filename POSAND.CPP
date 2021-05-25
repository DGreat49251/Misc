#include<iostream>

using namespace std;

int isexp2(int a);

int main()
{
    int t;
    cin>>t;     //INPUT FOR NUMBER OF TEST CASES
    while(t--)
    {
        int n;
        cin>>n; //INPUT FOR EACH TEST CASE
        if(n==1)
        {
            cout<<1<<endl;  //OUTPUT FOR THIS CASE
            continue;
        }
        else if(n==5)
        {
            cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;  //OUTPUT FOR THIS CASE
            continue;
        }
        else if(n==3)
        {
            cout<<1<<" "<<3<<" "<<2<<endl;  //OUTPUT FOR THIS CASE
            continue;
        }
        else if(isexp2(n))
        {
            cout<<-1<<endl;     //OUTPUT FOR THIS CASE
            continue;
        }
        else
        {
            cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
            int i=6;
            while(i<=n)
            {
                if(!isexp2(i))
                {
                    cout<<i<<" ";
                    i++;
                }
                else
                {
                    cout<<i+1<<" "<<i<<" "; //GENERATING OUTPUT FOR THIS CASE
                    i+=2;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

int isexp2(int a)
{
    return a!=0 && ((a&(a-1))==0);
}
