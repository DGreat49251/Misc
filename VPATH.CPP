#include<bits/stdc++.h>
using namespace std;
#define f(i,a, b) for(long i = a; i < b; i++)
#define mod  1000000007
#define sz(a) (long)(a.size())
#define pb push_back
#define rz resize
using namespace std;

long ans;
vector<vector<long>>v;
vector<long> dp, tot;

void dfs(long cur, long par)
{
    dp[cur]=1,tot[cur]=1;
    long sum = 0, cnt = 0;
    f(i,0,sz(v[cur]))
    {
        long node=v[cur][i];
        if(node!=par)
        {
            dfs(node,cur);
            dp[cur]+=((2*dp[node])%mod);dp[cur]%=mod;cnt++;
            tot[cur]+=tot[node];tot[cur]%=mod;tot[cur]%=mod;tot[cur]+=dp[node];tot[cur]%=mod;
            sum+=dp[node];
        }
    }
    f(i,0,sz(v[cur]))
    {
        long node=v[cur][i];
        if(node!=par)
        {
            tot[cur]+=(dp[node]*((sum-dp[node]+mod)%mod))%mod;
            tot[cur]%=mod;
        }
    }
}
void sol() 
{
    long z = 1;
    cin>>z;
    f(i,1,z+1)
    {
        ans=0;
        long n;
        cin>>n;
        v.rz(n+1),dp.rz(n+1),tot.rz(n+1);
        f(i,0,n-1)
        {
            long l,r;
            cin>>l>>r;
            v[l].pb(r),v[r].pb(l);
        }
        dfs(1,1);
        long ans=tot[1]%mod;
        cout<<ans<<"\n";
        dp.clear(),v.clear(),tot.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}