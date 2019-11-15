#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, f=0, c=0;

    cin>>a>>b;

    if(a==1 && b==1)
    {

    }
    else
    {
        while(a>0 && b>0)
        {
            if(a<b)
            {
                f=0;
            }
            else
            {
                f=1;
            }

            c++;

            if(f==0)
            {
                a++;
                b-=2;
            }
            else
            {
                b++;
                a-=2;
            }
        }
    }
    
    cout<<c<<endl;

    return 0;
}