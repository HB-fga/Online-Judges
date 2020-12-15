#include <bits/stdc++.h>

using namespace std;

int is_2020(char a, char b, char c, char d, char a2, char b2, char c2, char d2)
{
    int ans = 0;

    if(a == '2' && b == '0' && c == '2' && d == '0') ans = 1;
    if(a == '2' && b == '0' && c == '2' && d2 == '0') ans = 1;
    if(a == '2' && b == '0' && c2 == '2' && d2 == '0') ans = 1;
    if(a == '2' && b2 == '0' && c2 == '2' && d2 == '0') ans = 1;
    if(a2 == '2' && b2 == '0' && c2 == '2' && d2 == '0') ans = 1;

    return ans;
}

int main ()
{
    int n, size;
    char str[210];

    cin >> n;

    while(n--)
    {
        cin >> size;
        cin >> str;

        if(is_2020(str[0], str[1], str[2], str[3], str[size-4], str[size-3], str[size-2], str[size-1]))
            cout << "YES";
        else
            cout << "NO";

        cout << endl;     
    }

    return 0;
}