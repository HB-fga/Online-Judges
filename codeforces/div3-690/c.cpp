// WA

#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream> 
#include <sstream>

using namespace std;

int main()
{

    int n, num;
    char out[15] = "123456789";
    char ans[15];
    char aux[15];

    int x, y, z, it, sum;
    
    cin >> n;

    while(n--)
    {
        cin >> num;

        if(num < 10)
            cout << num << endl;
        else if(num > 45)
            cout << "-1" << endl;
        else
        {
            z = 1;
            x = y = 9;
            ans[0] = '-';
            ans[1] = '1';
            ans[2] = '\0';

            while(x > 0)
            {
                sum = 0;
                it = 0;
                for(int i = x-1; i <= y-1; i++)
                {
                    aux[it] = out[i];
                    sum += (aux[it] - '0');
                    it++;

                    if(i == y-1) aux[it] = '\0';
                }

                z = 1;
                while(z != x)
                {
                    if(z+sum == num)
                    {
                        ans[0] = (z + '0');

                        it = 0;
                        while(1)
                        {
                            ans[it+1] = aux[it];
                            it++;
                            if(aux[it == '\0'])
                            {
                                ans[it+1] = '\0';
                                break;
                            }
                        }
                    }
                    z++;
                }

                x--;
            }

            cout << ans << endl;
        }
    }

    return 0;
}