#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {

    int n, total, zeros;
    string tc;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> tc;
        total = 0;

        for(int j = 0; j < tc.size();j++)
        {
            if(tc[j] != '0')
                total++;
        }

        cout << total << endl;

        for(int j = 0; j < tc.size();j++)
        {
            if(tc[j] != '0')
            {
                cout << tc[j];
                zeros = tc.size() - 1 - j;
                while(zeros--)
                {
                    cout << 0;
                }
                cout << " ";
            }

        }
        cout << endl;
    }

    return 0;
}