#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    int x1, y1, x2, y2;

    cin >> n;

    while(n--)
    {
        c = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        if( x1 != x2 && y1 != y2 )
            c += 2;

        if(x2 > x1)
            c += x2-x1;
        else
            c += x1-x2;

        if(y2 > y1)
            c += y2-y1;
        else
            c += y1-y2;

        // while( x1 != x2 || y1 != y2 )
        // {
        //     c++;

        //     if( x2 > x1 )
        //         x1++;
        //     else if( x2 < x1 )
        //         x1--;
        //     else
        //     {
        //         if( c > 1 )
        //             c += 2;
        //         if( y2 > y1 )
        //             y1++;
        //         else if( y2 < y1 )
        //             y1--;
        //     }
        // }

        cout << c << endl;
    }

    return 0;
}