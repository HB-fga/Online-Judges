#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, ans;
    int a[3];

    cin >> n;

    while(n--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);

        if(a[0] != a[1] && a[0] != a[2] && a[1] != a[2])
        {
            a[0]++;
            a[2]--;
        }
        else if(a[0] == a[1] && a[1] != a[2])
        {
            a[0]++;
            a[1]++;
            if(a[2] != a[0]) a[2]--;
        }
        else if(a[1] == a[2] && a[1] != a[0])
        {
            a[1]--;
            a[2]--;
            if(a[0] != a[2]) a[0]++;
        }

        ans = a[1] - a[0] + a[2] - a[0] + a[2] - a[1];

        cout << ans << endl;

    }

    return 0;
}