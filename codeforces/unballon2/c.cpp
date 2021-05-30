#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d;
    int ans1, ans2;

    // a*c + a*d + b*c + b*d
    // a*c - b*d

    cin>>a>>b>>c>>d;

    ans1 = a*c - b*d;
    ans2 = a*d + b*c;

    cout<<"("<<ans1<<") + ("<<ans2<<"i)\n";

    return 0;
}