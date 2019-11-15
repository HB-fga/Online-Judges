#include <bits/stdc++.h>

using namespace std;

int main() {

    int p, f, aux, fd, ans=0;
    int likes[1000000]={};
    char c='x';

    cin>>p>>f;

    for(int i=0;i<p;i++)
    {
        cin>>aux;

        while(aux--)
        {
            cin>>fd;

            likes[fd]++;
        }
    }

    for(int i=0;i<1000000;i++)
    {
        if(likes[i]==p)
        {
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}