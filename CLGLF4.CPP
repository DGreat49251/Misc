#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t, n, e, h, a, b, c;
    scanf("%ld",&t);
    while (t > 0)
    {
        scanf("%ld%ld%ld%ld%ld%ld",&n,&e,&h,&a,&b,&c);
        vector<long> result;
        vector<long> d;
        for (long i = 0; i <= n; i++)
        {
            d.push_back(i);
        }
        long d1 = 0, d2 = 0;
        long o, k;
        for (long i = 0; i <= n; i++)
        {
            d1 = lower_bound(d.begin(), d.end(), (2 * n - e - 2 * i)) - (d.begin());
            d2 = upper_bound(d.begin(), d.end(), (h - 3 * i)) - d.begin() - 1;
            if (d2 < d1 || d1 == n + 1)
            {
                continue;
            }
            if ((d2 == n + 1) && (d2 + 3 > n))
            {
                continue;
            }
            if (c > a)
            {
                k = (d1 < (n - i) ? d1 : (n - i));
            }
            else
            {
                k = (d2 < (n - i) ? d2 : (n - i));
            }
            o = n - k - i;
            if ((k + 2 * i) >= 2 * n - e && (k + 3 * i) <= h)
            {
                result.push_back(a * o + b * i + c * k);
            }
        }
        if (result.size() == 0)
        {
            cout << "-1\n";
        }
        else
        {
            long res = result[0];
            for (long i = 0; i < result.size(); i++)
            {
                res = min(res, result[i]);
            }
            printf("%ld\n",res);
        }
        t--;
    }
    return 0;
}