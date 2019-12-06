#include <bits/stdc++.h>

using namespace std;

int main() {

    int b, e;
    int c = 0;

    cin >> b >> e;

    if(b==e)
        cout << "O JOGO DUROU 24 HORA(S)\n";
    else
    {
        while(b!=e)
        {
            c++;
            if(b!=23)
                b++;
            else
                b = 0;
        }
        cout << "O JOGO DUROU " << c << " HORA(S)\n";
    }

    return 0;
}