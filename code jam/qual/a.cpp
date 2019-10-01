#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {

    int n, x, t, sum;
    char s[11]={};

    cin>>n;

    for(int j=1;j<=n;j++)
    {
        sum=0;
        x=0;

        cin>>s;

        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='4')
            {
                t=(strlen(s)-i-1);
                sum=1;
                s[i]='3';
                while(t--)
                {
                    sum*=10;
                }
                x+=sum;
            }
        }

        cout<<"Case #"<<j<<": "<< s <<" "<<x<<endl;
    }

    return 0;
}