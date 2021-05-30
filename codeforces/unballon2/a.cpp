#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, q;
    char letras[100010];
    int hist[26];
    int l, r;
    int palin;

    cin>>n>>q;

    for(int i = 0; i < n; i++)
    {
        cin>>letras[i];
    }
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<letras[i];
    // }


    for(int i = 0; i < q; i++)
    {
        cin>>l>>r;

        palin = 0;
        for(int j = 0; j<26; j++)
            hist[j] = 0;

        for(int j = l-1; j < r; j++)
        {
            // cout << "###################\n";
            // cout << "letra em " << j << " eh: " << letras[j] << endl;
            // cout << "hist em " << j << " eh: " << hist[j] << endl;
            // cout << "palin eh: " << palin << endl;

            hist[letras[j]-'a']++;
            if(hist[letras[j]-'a']%2 != 0)
                palin++;
            else
                palin--;

            // cout << "agora hist em " << j << " eh: " << hist[j] << endl;
            // cout << "agora palin eh: " << palin << endl;
            // cout << "###################\n";
        }

        if(palin < 2)
            cout << "Sim\n";
        else
            cout << "Nao\n";

    }

    return 0;
}