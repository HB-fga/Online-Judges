#include <bits/stdc++.h>

using namespace std;

void print_time(int x)
{
    cout << (x/1000)/60;
    cout << ":";
    cout << std::setfill('0') << setw(2) << (x/1000)%60;
    cout << ".";
    cout << std::setfill('0') << setw(3) << x%1000 << endl;
}

int main()
{
    string names[30];
    int times[30];
    int n, a, b, ta, tb;
    int found;
    char dump;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        ta = tb = 0;

        cin >> names[i];

        cin >> a >> dump >> b;
        ta += a;
        tb += b;

        cin >> a >> dump >> b;
        ta += a;
        tb += b;

        cin >> a >> dump >> b;
        ta += a;
        tb += b;

        tb += (ta*1000);
        times[i] = tb;
    }

    for(int j = 0; j < n; j++)
    {
        found = -1;
        for(int i = 0; i < n; i++)
        {
            if(times[i] != -1)
            {
                if(found == -1)
                    found = i;
                else if(times[i] < times[found])
                    found = i;
            }
        }

        cout << (j+1) << ". " << names[found] << " - ";
        print_time(times[found]);

        times[found] = -1;
    }
    
    return 0;
}