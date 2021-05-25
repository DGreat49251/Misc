#include <bits/stdc++.h>
using namespace std;
long input()
{
    long x;
    scanf("%ld",&x);
    return x;
}
void sol_game()
{
    long n, m, k;
    n=input();
    m=input();
    k=input();
    vector<long> game(n + 1);
    for (long i = 0; i < n; i++)
        game[i + 1]=input();
    vector<vector<pair<long, long>>> arr(n + 1), p(n + 1);
    for (long i = 0; i < m; i++)
    {
        long u, v, d;
        u=input();
        v=input();
        d=input();
        arr[u].push_back(make_pair(i, d));
        arr[v].push_back(make_pair(i, d));
    }
    p[0].push_back(make_pair(0, 0));
    for (long i = 1; i <= n; i++)
    {
        vector<pair<long, long>> t;
        t.insert(t.end(), p[i - 1].begin(), p[i - 1].end());
        long c = 0, m = 0;
        set<long> op;
        for (long j = i; j >= 1; j--)
        {
            c += game[j];
            m ^= 1LL << j;
            for (auto x : arr[j])
            {
                if (op.count(x.first))
                    c += x.second;
                else
                    op.insert(x.first);
            }
            if (j > 1)
                for (auto y : p[j - 2])
                    t.push_back(make_pair(y.first + c, m ^ y.second));
            else
                t.push_back(make_pair(c, m));
        }
        sort(t.begin(), t.end());
        reverse(t.begin(), t.end());
        set<long> s;
        long f = 0;
        for (long j = 0; j < t.size() && f < k; j++)
        {
            if (s.count(t[j].second))
                continue;
            p[i].push_back(t[j]);
            f++;
            s.insert(t[j].second);
        }
    }
    for (long i = 0; i < k; i++)
        printf("%ld ",p[n][i].first);
    printf("\n");
}
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        sol_game();
    }
    return 0;
}