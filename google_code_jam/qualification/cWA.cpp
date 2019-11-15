#include <bits/stdc++.h>

using namespace std;

int primo(int x) {
    
    if(x==1)
    {
        return 2;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 2;
        }
    }
    return 1;
}

int main() {

    int n;
    int pm, x;
    int pr[110];
    int r1[150];
    char s[150];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>pm>>x;

        for(int j=0;j<x;j++)
        {
            cin>>pr[j];
        }
        for(int j=0;j<x;j++)
        {
            for(int k=pm;k>1;k--)
            {
                if(primo(k)>1)
                {
                    continue;
                }
                else if((primo(pr[j]/k))>1)
                {
                    continue;
                }
                else
                {
                    r1[j]=k;
                    r1[j+1]=(pr[j]/k);
                    cout<<r1[j]<<endl<<r1[j+1]<<endl;
                }
            }
        }
        //cout<<"Case #"<<(i+1)<<": "<<s<<endl;
    }

    return 0;
}