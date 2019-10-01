#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    int x;
    char s[100018];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        cin>>s;

        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='S')
            {
                s[j]='E';
            }
            else
            {
                s[j]='S';
            }
        }

        cout<<"case #"<<(i+1)<<": "<<s<<endl;
    }

    return 0;
}