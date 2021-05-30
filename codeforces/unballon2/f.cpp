#include <bits/stdc++.h>

using namespace std;

int main() {

    int tab[1010][1010] = {};
    int size, ships, bombs;
    int x, y;
    int ans = 0;

    cin>>size>>ships>>bombs;

    for(int i = 0; i < ships; i++)
    {
        cin>>x>>y;

        tab[x][y] = 1;
    }

    for(int i = 0; i < bombs; i++)
    {
        cin>>x>>y;

        if (tab[x][y] == 1)
        {
            tab[x][y] = 0;
            ans++;
        }
        if (tab[x+1][y] == 1)
        {
            tab[x+1][y] = 0;
            ans++;
        }
        if (tab[x-1][y] == 1)
        {
            tab[x-1][y] = 0;
            ans++;
        }
        if (tab[x][y+1] == 1)
        {
            tab[x][y+1] = 0;
            ans++;
        }
        if (tab[x][y-1] == 1)
        {
            tab[x][y-1] = 0;
            ans++;
        }
    }   

    cout<<ans<<"\n";

    return 0;
}