#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    int N = 4000005;
    int calculate[N], answer[N];
    for(int i = 0; i < N; i++)
    {
        calculate[i] = i;
        answer[i] = 0;
    }
    for( int p = 2;p < N; p++)
    {
        if(calculate[p] == p)
        {
            calculate[p] = p - 1;
            for(int i = 2*p; i < N; i +=p)
            {
                calculate[i] = (calculate[i]/p)*(p - 1);
            }
        }
    }
    for(int i = 1; i < N; i++)
    {
        answer[i] += i - 1;
        for (int j = 2*i ; j < N; j+=i)
        {
            answer[j] += i * ((1 + calculate[j / i]) / 2);
        }
    }
    int t;
    cin >> t;
    while(t-->0)
    {
        int k;
        cin >> k;
        cout << answer[4*k + 1] << "\n";
    }
    return 0;
}
/*int gcd(int a, int b)    //Calculating GCD using Euclidean Algorithm (minimum time)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}
int main()
{
    int t;
    scanf("%ld",&t);
    while (t-- > 0)
    {
        int sum = 0, k;
        scanf("%ld",&k);
        for (int i = 1; i <= 2 * k; i++)
        {
            sum += gcd((k + (i * i)), (k + ((i + 1) * (i + 1))));
        }
        printf("%ld\n",sum);
    }
    return 0;
}*/