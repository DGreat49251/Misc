#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector <pair<int,int>> p,s;
        for (int i=0; i<n;i++)
        {
            int q; 
            cin>>q;
            p.push_back({i+1,q});
        }
        if (n==2)
        {
            printf("1\n");
            continue;
        }
        s.push_back(p[0]);
        s.push_back(p[1]);
        int res=1, sl=s.size();
        for (int i=2; i<n; i++)
        {
            while (s.size()>=2)
            {
                double t1 = ((double)s[sl-1].second - (double)s[sl-2].second)/((double)s[sl-1].first - (double)s[sl-2].first);
                double t2 = ((double)p[i].second - (double)s[sl-2].second)/((double)p[i].first - (double)s[sl-2].first);
                if (t1<=t2)
                {
                    s.pop_back();
                    sl--;
                }
                else break;    
            }
            s.push_back(p[i]);
            sl++;
            res=max(res, s[sl-1].first - s[sl-2].first);
        }
        printf("%d\n", res);
    }
}