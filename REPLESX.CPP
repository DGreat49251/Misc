#include<bits/stdc++.h>

using namespace std;

//FUNCTIONS USED OTHER THAN long main() IN THE PROGRAM
long findpos(long a[], long nn, long xx, long pp);
void testcase();
int main()      //PROGRAM STARTS
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t = 1;
    cin>>t;     //INPUT FOR UMBER OF TEST CASES
    while(t--)
    {
        testcase();     //FUNCTION CALL TO GENERATE OUTPUT FOR EACH TEST CASE
        cout<<"\n";
    }
    return 0;
}

void testcase()     //WORKING FUNCTION FOR EACH TEST CASE
{
    long n, x, p, k;
    cin >> n >> x >> p >> k;        //FIRST IINPUT LINE FOR EACH TEST CASE
    long arr[n];
    for(long i=0;i<n;i++)
        cin >> arr[i];      //SECOND INPUT LINE FOR EACH TEST CASE
    sort(arr, arr+n);
    long pos = findpos(arr, n, x, p);
    long c = 0;      //COUNTER FOR NUMBER OF OPERATIONS
    if(arr[pos] != x)       //IF ELEMENT NOT PRESENT
    {
        arr[k-1] = x;
        sort(arr, arr+n);
        c++;
    }
    if(arr[p-1] == x)   //
    {
        cout << 0+c;
        return; //BACK TO main()
    }
    if((p > k && arr[p-1] > x) || (p < k && arr[p-1] < x))      //OBVIOUS IMPOSSIBLE CONDITIONS
    {
        cout << -1;
        return;     //BACK TO main()
    }
    /*if(p < k && arr[p-1] < x)     CLUBBED WITH PREVIOUS USING || OPERATOR
    {
        cout << -1;
        return;
    }*/
    pos = findpos(arr, n, x, p)+1;
    cout << abs(p-pos)+c;   //BACK TO main()
}

long findpos(long a[], long nn, long xx, long pp)        //FUNCTION TO FIND POSITION OF ELEMENT
{
    long min = 100000000, minp=-1;
    for(long i=0;i<nn;i++)
    {
        if(a[i] == xx)
        {
            if(abs(pp-i) < min)
            {
                min = abs(pp-i);
                minp = i;
            }
        }
    }
    return minp;    //BACK TO FUNCTION CALL
}
