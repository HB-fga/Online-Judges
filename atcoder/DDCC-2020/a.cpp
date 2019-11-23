#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, y;
    int ans = 0;

    cin >> x >> y;

    if(x == y && x ==1)
        cout << "1000000\n";
    else
    {
        switch(x)
        {
            case 1:
                ans += 300000;
                break;
            case 2:
                ans += 200000;
                break;
            case 3:
                ans += 100000;
                break;
        }

        switch(y)
        {
            case 1:
                ans += 300000;
                break;
            case 2:
                ans += 200000;
                break;
            case 3:
                ans += 100000;
                break;
        }

        cout << ans << endl;

    }
        
    

    return 0;
}