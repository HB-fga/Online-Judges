#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main() {

    char st[1010][1010];
    int lines=0;
    int col=0;
    int space;
    int side=0, f=0;

    while(!cin.eof())
    {
        cin.getline(st[lines], 1010);

        if(strlen(st[lines])>col)
        {
            col=strlen(st[lines]);
        }
        lines++;
    }

    space=col+2;
    while(space--)
    {
        cout<<"*";
    }
    cout<<"\n";

    for(int i=0;i<lines-1;i++)
    {
        cout<<"*";
        
        space=(col-strlen(st[i]))/2;
        if((col-strlen(st[i]))%2!=0)
        {
            if(side==1)
            {
                space++;
                side--;
                f=1;
            }
        }

        while(space--)
        {
            cout<<" ";
        }

        cout<<st[i];

        space=(col-strlen(st[i]))/2;
        if((col-strlen(st[i]))%2!=0)
        {
            if(side==0 && f==0)
            {
                space++;
                side++;
                f=1;
            }
        }

        while(space--)
        {
            cout<<" ";
        }

        cout<<"*\n";
        f=0;
    }

    space=col+2;
    while(space--)
    {
        cout<<"*";
    }
    cout<<"\n";

    return 0;
}