#include <bits/stdc++.h>
using namespace std;

bool isprime(long n) //Function to check for prime number
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long t, x, y;
    scanf("%ld", &t);
    long p[1000001]; //Array to store the number of prime numbers
    p[0] = 0;
    p[1] = 0;
    long count = 0;
    for (long i = 2; i < 1000001; i++)
    {
        if (isprime(i))
        {
            count++;
        }
        p[i] = count;
    }
    while (t > 0)
    {
        scanf("%ld", &x);
        scanf("%ld", &y);
        if (p[x] <= y)
            printf("Chef\n");
        else
            printf("Divyam\n");
        t--;
    }
    return 0;
}