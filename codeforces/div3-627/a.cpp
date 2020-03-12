#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, c, min;
    int pieces[110];
    int flag;

    cin>>n;

    while(n--)
    {
        cin>>c;
        flag = 0;
        min = 110;

        for(int i = 0;i < c;i++)
        {
            cin>>pieces[i];

            if(pieces[i] < min)
                min = pieces[i];
        }

        for(int i = 0;i < c;i++)
        {
            pieces[i] = pieces[i]-min;
            if(pieces[i] % 2 != 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}