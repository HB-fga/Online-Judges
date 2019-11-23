// WA

#include <bits/stdc++.h>

using namespace std;

int main() {

    int h, w, k;
    int slice = 1;
    char c;
    bool first = true;
    bool berry = false;
    bool first_berry = true;

    int cake[310][310];
    int cake_piece[310];


    cin >> h >> w >> k;

    for(int i = 0;i < h;i++)
    {
        first_berry = true;
        berry = false;

        for(int j = 0;j < w;j++)
        {
            cin >> c;
            switch(c)
            {
                case '.':
                    cake_piece[j] = 0;
                    break;
                case '#':
                    berry = true;
                    cake_piece[j] = 1;
                    break;
            }
        }

        if(first == false)
            if(berry == true)
                slice++;

        for(int j = 0;j < w;j++)
        {
            

            if(berry == false)
            {
                if(first == true)
                {
                    cout << slice;
                    cake[i][j] = slice;
                }
                else
                {
                    cout << cake[i-1][j];
                    cake[i][j] = cake[i-1][j];
                }
                
            }
            else
            {
                if(cake_piece[j] == 1)
                {
                    if(first_berry == true) first_berry = false;
                    else slice++;
                }
                cout << slice;
                cake[i][j] = slice;
            }
            
        }

        cout << endl;
        if(first == true)
            first = false;

    }

    return 0;
}