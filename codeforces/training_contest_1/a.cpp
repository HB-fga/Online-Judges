#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, h, p, ans = 0;

    cin>>n>>h;

    while(n--)
    {
        cin>>p;
        if(p>h)
            ans+=2;
        else
            ans++;
    }

    cout<<ans<<endl;

    return 0;
}