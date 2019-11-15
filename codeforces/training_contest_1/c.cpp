#include <bits/stdc++.h>

using namespace std;

int vowel(char x) {
    
    int r;

    switch(x)
    {
        case 'A':
            r=1;
            break;
        case 'E':
            r=1;
            break;
        case 'I':
            r=1;
            break;
        case 'O':
            r=1;
            break;
        case 'U':
            r=1;
            break;
        case 'Y':
            r=1;
            break;
        default:
            r=0;
            break;
    }

    return r;
}

int main() {

    int ans=0, c=0;
    string str;

    cin>>str;

    for(int i=0;;i++)
    {
        c++;

        if(i == str.size())
        {
            if(ans<c) ans = c;
            c = 0;
            break;
        }

        if(vowel(str.at(i)) == 1)
        {
            if(ans<c) ans = c;
            c = 0;
        }
    }

    cout<<ans<<endl;

    return 0;
}