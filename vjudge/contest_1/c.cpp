#include <bits/stdc++.h>

using namespace std;

int main() {

    long long int n, minp, maxp, smaxp;
    long long int min=1000000001, max=-1, smax=-1, ans;
    long long int m[100010]={};

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }

    while(1)
    {

        for(int i=0;i<n;i++)
        {
            if(m[i]>0)
            {
                if(m[i]<min)
                {
                    min=m[i];
                    minp=i;
                    ans=min;
                }

                if(m[i]>max)
                {
                    smaxp=maxp;
                    smax=max;
                    max=m[i];
                    maxp=i;
                }
            }
        }

        if(max==min || max <= 0) break;
        else m[maxp]-=(m[smaxp]*(max/smax));

        max=-1;
        min=1000000001;
    }

    cout<<ans<<endl;

    return 0;
}