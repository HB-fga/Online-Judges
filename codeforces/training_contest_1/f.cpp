#include <bits/stdc++.h>

using namespace std;

int main() {

    int l;
    int la, lb;
    double aux;
    int auxa, auxb;

    cin>>l;

    l=l*l;
    la=l/2;
    if(l%2==0) lb=la;
    else lb=la+1;

    la++;
    lb--;

    while(la!=0)
    {

        la--;
        lb++;

        auxa = sqrt(la);
        auxb = sqrt(lb);

        aux=la;
        if(sqrt(aux) - auxa == 0.0){}
        else continue;
        aux=lb;
        if(sqrt(aux) - auxb == 0.0){}
        else continue;

        cout<<sqrt(la)<<" "<<sqrt(lb)<<endl;
        break;

    }

    return 0;
}