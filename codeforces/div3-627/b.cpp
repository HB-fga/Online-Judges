// WA on case 5
#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, t, a, last;

    int hist[5010] = {};

    cin >> n;

    while(n--)
    {
        cin >> t;
        fill(hist, hist+5010, 0);
        last = -1;

        while(t--)
        {
            cin >> a;
            
            if(a != last)
            {
                if(hist[a] > 0)
                {
                    cout << "YES\n";
                    break;
                }
                else
                    hist[a]++;
            }
            
            if(last == a)
                last = -1;
            else
                last = a;

            if(t == 0)
                last = -2;
        }

        if(last == -2)
            cout << "NO\n";

    }
    return 0;
}