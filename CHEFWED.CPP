#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,K;
    cin>>T;
    while(T>0)
    {
        cin>>N>>K;
        int F[N];
        for(int i=0;i<N;i++)
        {
            cin>>F[i];
        }
        unordered_map <int,int> freq;
        for(int i=0;i<N;i++)
        {
            freq[F[i]]++;
        }
        unordered_map <int,int>:: iterator p;
        int nt;
        for(p=freq.begin();p!=freq.end();p++)
        {
            if(p->second >1)
                nt++;
        }
        cout<<nt;
        T--;
    }
    return 0;
}
