// WA on case 2
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, t, k;
    int aux;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> t >> k;

        if((t-k)%2 == 0)
        {
            cout << "YES" << endl;

            aux = k-1;

            while(aux--)
            {
                cout << 1 << " ";
            }

            cout << t-(k-1) << endl;

            // k-1 numeros 1 + resto
        }
        else
        {
            if(t - (k-1)*2 <= 1 || (t - (k-1)*2)%2 == 1 || k > t )
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;

                aux = k-1;

                while(aux--)
                {
                    cout << 2 << " ";
                }

                cout << (t - (k-1)*2) << endl;
            }
            
            //k-1 numeros 2 + resto
        }
        
    }

    return 0;
}