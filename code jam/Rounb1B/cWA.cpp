#include <bits/stdc++.h>

using namespace std;

int diferenca(int x,int y)
{
    int r;

    if(x-y<0)
    {
        r=(x-y)*-1;
    }
    else
    {
        r=x-y;
    }
    
    return r;
}

int maior(int x[], int s1, int s2)
{
    int maior=-1;

    
    cout<<x[s1]<<endl;
    for(int i=s1;i<s2;i++)
    {
        
        if(x[i]>maior && x[i]!=0)
        {
            maior=x[i];
        }
    }
    cout<<maior<<endl;
    return maior;
}


int main() {

    int n;
    int s, d;
    int s1[100010], s2[100010];
    int c;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        c=0;

        cin>>s>>d;

        for(int j=0;j<s;j++)
        {
            cin>>s1[j];
        }

        for(int j=0;j<s;j++)
        {
            cin>>s2[j];
        }

        while(s)
        {
            for(int j=0;j<s;j++)
            {
                for(int k=0;k<s;k++)
                {
                    if(s1[k]!=0 && s2[j]!=0)
                    {
                        if(diferenca(maior(s1, j, k), maior(s2, j, k))<=d && maior(s1, j, k)!=-1 && maior(s2, j, k)!=-1)
                        {
                            c++;
                            cout<<j<<" "<<k<<endl;
                        }
                    }
                }
                s2[j]=0;
            }
            s--;
        }

        cout<<"Case #"<<(i+1)<<": "<<c<<endl;
    }

    return 0;
}