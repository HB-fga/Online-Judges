#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, f=0;
    int suml=0, sumr=0;
    string number;

    cin>>n>>number;

    for(int i=0; i<n; i++)
    {
        if(number.at(i)!='4' && number.at(i)!='7')
        {
            f=1;
            break;
        }
        else
        {
            if(i<(n/2))
            {
                suml+=(number.at(i)-'0');
            }
            else
            {
                sumr+=(number.at(i)-'0');
            }
        }
    }

    if(f==0 && suml==sumr)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}