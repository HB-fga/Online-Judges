#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d;
    double wins = 0, turns = 0, ans;

    cin>>a>>b>>c>>d;

    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= c; j++)
        {
            turns += 1;
            if(i+b > j+d) wins += 1;
        }
    }

    ans = wins / turns;
    

    cout<<ans<<"\n";

    return 0;
}