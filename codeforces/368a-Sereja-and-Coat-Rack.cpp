#include <bits/stdc++.h>

using namespace std;

int main() {

    int seats, fine, guests;
    int pocket=0, aux;
    vector <int> hooks;

    cin>>seats>>fine;

    for(int i=0;i<seats;i++)
    {
        cin>>aux;
        hooks.push_back(aux);
    }

    cin>>guests;

    if(guests>seats)
    {
        for(int i=0;i<seats;i++)
        {
            pocket+=hooks.at(i);
        }
        pocket-=(guests-seats)*fine;
    }
    else
    {
        sort(hooks.begin(), hooks.end());
        
        for(int i=0;i<guests;i++)
        {
            pocket+=hooks.at(i);
        }
    }
    
    cout<<pocket<<endl;

    return 0;
}