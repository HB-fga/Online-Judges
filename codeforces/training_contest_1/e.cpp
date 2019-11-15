#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m;
    int ans=0;
    char c;
    int mx[12][12]={};

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c=='P') mx[i][j]=1;
            if(c=='W') mx[i][j]=2;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mx[i][j]==1)
            {
                if(i!=0)
                {
                    if(mx[i-1][j]==2)
                    {
                        mx[i-1][j]=0;
                        ans++;
                        continue;
                    }
                }
                if(i!=n-1)
                {
                    if(mx[i+1][j]==2)
                    {
                        mx[i+1][j]=0;
                        ans++;
                        continue;
                    }
                }
                if(j!=0)
                {
                    if(mx[i][j-1]==2)
                    {
                        mx[i][j-1]=0;
                        ans++;
                        continue;
                    }
                }
                if(j!=m-1)
                {
                    if(mx[i][j+1]==2)
                    {
                        mx[i][j+1]=0;
                        ans++;
                        continue;
                    }
                }
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}