#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, ans = 0;
    int arq[5010];

    cin>>n;

    for(int i =0; i< n; i++)
    {
        cin>>arq[i];
    }

    int l = 0;
    int r = n-1;

    int lt = 0;
    int rt = 0;  

    while(1)
    {
        lt += arq[l];
        l++;

        if(l>r) break;

        rt += arq[r];
        r--;

        if(l>r) break;
    }

    l = 0;
    r = n-1;
    
    while(1)
    {
        if (lt == 0 && rt == 0) break;

        if(lt<rt)
        {
            ans+=arq[l];
            ans+=arq[r];
            rt-=arq[r];
            r--;
        }
        else
        {
            ans+=arq[l];
            ans+=arq[r];
            lt-=arq[l];
            l++;
        }
    }

    cout<<ans<<endl;

    return 0;
}