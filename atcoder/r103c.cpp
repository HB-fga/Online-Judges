#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x, maxi=-1, maxp=-1;
    int ans=0;
    int imp[50010];
    int par[50010];

    cin>>n;

    for(int i=0;i<n/2;i++)
    {
        cin>>x;
        imp[x]++;
        if(imp[x]>maxi)
        {
            maxi=imp[x];
        }
        
        cin>>x;
        par[x]++;
        if(par[x]>maxp)
        {
            maxp=par[x];
        }
    }

    ans+=n/2-maxi;
    ans+=n/2-maxp;

    cout<<ans<<endl;

    return 0;
}