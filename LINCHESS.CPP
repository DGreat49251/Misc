#include<bits/stdc++.h>

using namespace std;

int main()
{
    long T,N,K;
    cin>>T;
    while (T>0)
    {
        cin>>N>>K;
        long P[N],nm[N],i;
        for(i=0;i<N;i++)
        {
            cin>>P[i];
            if (K%P[i]==0 && P[i]<=K)
            {
                nm[i]=(K/P[i])-1;
            }
            else
            {
                nm[i]=-1;
            }
        }
        sort(nm,nm+N);
        long s=-1,pos=0;
        int flag=0;
        for(i=0;i<N;i++)
        {
            if (nm[i]>-1)
            {
                flag=1;
                pos=i;
                break;
            }
        }
        if (flag==1)
        {
            s=K/(nm[pos]+1);
        }
        cout<<s<<endl;
        T--;
    }
    return 0;
}

