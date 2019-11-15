#include <iostream>

using namespace std;

int main() {

    int n, t;
    int m, x[510]={}, y[510]={};
    char b[510]={};
    int rx, ry, c, cmax;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        c=0;
        cmax=c;

        cin>>t>>m;

        for(int j=0;j<t;j++)
        {
            cin>>x[j]>>y[j]>>b[j];
        }

        for(int j=0;j<=m;j++)
        {
            for(int k=0;k<=m;k++)
            {
                for(int l=0;l<t;l++)
                {
                    switch (b[l])
                    {
                        case 'N':
                            if(j>y[l])
                            {
                                c++;
                            }
                            break;
                        case 'S':
                            if(j<y[l])
                            {
                                c++;
                            }
                            break;
                        case 'E':
                            if(k>x[l])
                            {
                                c++;
                            }
                            break;
                        case 'W':
                        if(k<x[l])
                            {
                                c++;
                            }
                            break;
                    }
                }
                if(c>cmax)
                {
                    cmax=c;
                    rx=k;
                    ry=j;
                }
                c=0;
            }
        }
        cout<<"Case #"<<(i+1)<<": "<<rx<<" "<<ry<<endl;
    }

    return 0;
}