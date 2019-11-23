// WA

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, total = 0, subtotal = 0; // yen = 0;
    int sec[200010];

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> sec[i];
        total += sec[i];
    }

    for(int i = 0;;i++)
    {
        subtotal += sec[i];
        
        if(subtotal == total/2)
        {
            cout << 0 << endl;
            return 0;
        }
        else if(subtotal > total/2)
        {
            cout << subtotal - (total - subtotal) << endl;
            return 0;
        }
        
    }

    return 0;
}