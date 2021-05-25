#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t > 0)
    {
        cin >> n;
        int w[n], l[n];
        for (int i = 0; i < n; i++)
            cin >> w[i];
        for (int i = 0; i < n; i++)
            cin >> l[i];
        map<int, int> wi;
        for (int i = 0; i < n; i++)
        {
            wi.insert(pair<int, int>(w[i], i));
        }
        int t1, t2, tx=0, c = 0;
        for (int i = 2; i <= n; i++)
        {
            t1 = wi[i];
            t2 = wi[i - 1];
            tx=0;
            if (t1 <= t2)
            {
                tx = ceil(((t2 + 1.0 - t1) / l[t1]));
                c = c + tx;
                wi[i] =wi[i] + (tx * l[t1]);
            }
        }
        cout << c;
        t--;
    }
    return 0;
}