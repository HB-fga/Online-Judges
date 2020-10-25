#include <bits/stdc++.h>

using namespace std;

int main()
{
    char songs[100010][60] = {};
    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        scanf(" %[^\n]", songs[x]);
    }
    
    while(scanf("%d", &x) != EOF)
    {
        if( songs[x][0] == 0 )
            cout << "Music not found" << endl;
        else
            cout << songs[x] << endl;
    }

    return 0;
}