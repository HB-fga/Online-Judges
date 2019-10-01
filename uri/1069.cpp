#include <bits/stdc++.h>
#include <stack>
#include <stdio.h>

using namespace std;

int main() {

    stack <char> diam;
    char x;
    int n, c=0;

    scanf("%d ", &n);

    for(int i=0;i<n;i++)
    {   
        while(1)
        {
            scanf("%c", &x);
            if(x=='<')
            {
                diam.push('<');
            }
            else if(x=='>')
            {
                if(diam.top()=='<')
                {
                    diam.pop();
                    c++;
                }
            }
            else if(x=='\n')
            {
                cout<<c<<endl;
                c=0;
                break;
            }
        }
    }

    return 0;
}