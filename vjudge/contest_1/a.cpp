#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b;

    cin>>a>>b;

    if(b%a==0)
    {
        cout<<b+a<<endl;
    }
    else
    {
        cout<<b-a<<endl;
    }
    

    return 0;
}