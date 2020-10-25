#include <bits/stdc++.h>

using namespace std;

int main()
{
    char nomes[30][30]; 
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> nomes[i];

        for(int j = 0; j <= i; j++)
        {
            if(j == 0)
                cout << "eu mikael ";
            if(j == i)
            {
                cout << "e ";
                cout << nomes[j] << endl;
            }
            else
            {
                cout << nomes[j] << " ";
            }
        }
    }

    return 0;
}