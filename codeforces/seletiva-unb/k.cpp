#include <bits/stdc++.h>

using namespace std;

int kisorte(int n, int a, int b, int c)
{
    int ans, x, y, z;

    x = n - a;
    if(x < 0)
        x = x*(-1);
    
    y = n - b;
    if(y < 0)
        y = y*(-1);
    y = y*y;

    z = n - c;
    if(z < 0)
        z = z*(-1);
    z = z*z*z;

    ans = x + y + z; 

    return ans;
}

int main()
{
    int a, b, c;
    int temp, min, ans;

    cin >> a >> b >> c;

    for( int i = 1; i < 100; i++ )
    {
        temp = kisorte(i, a, b, c);

        if( i == 1 )
        {
            min = temp;
            ans = i;
        }
        else if(temp < min )
        {
            min = temp;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}