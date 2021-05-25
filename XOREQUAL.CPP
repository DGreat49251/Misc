#include<iostream>
using namespace std;
int power(long long x, unsigned int y, int p)
{
    int res = 1;        //initialising the result
    x=x%p;              //Update if it is more than or equal to p
    if (x==0)
        return 0;       //In case if it is divisible by p
    while(y>0)
    {
        if(y&1)         //If y is odd multiply x with the result
            res=(res*x)%p;
        y=y>>1;         //y must be even now
        x=(x*x)%p;
    }
    return res;
}
int main()
{
    long t,n,ans;
    scanf("%ld",&t);    //input for test cases
    while(t>0)
    {
        scanf("%ld",&n);    //input for n
        ans=power(2,(n-1),1000000007);      //calling the function for each test case
        cout<<ans<<"\n";    //printing the result
        t--;
    }
    return 0;
}