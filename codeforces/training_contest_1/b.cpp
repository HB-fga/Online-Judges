#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, p, ans;
    vector <int> P;
    vector <int> M;
    vector <int> PE;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>p;

        switch (p)
        {
            case 1:
                P.push_back(i);
                break;
            case 2:
                M.push_back(i);
                break;
            case 3:
                PE.push_back(i);
                break;
        }
    }

    if(P.size() <= M.size() && P.size() <= PE.size())
        ans=P.size();
    if(M.size() <= P.size() && M.size() <= PE.size())
        ans=M.size();
    if(PE.size() <= M.size() && PE.size() <= P.size())
        ans=PE.size();


    cout<<ans<<endl;

    for(int i = 0;i < ans;i++)
    {
        cout<<1+P.at(i)<<" "<<1+M.at(i)<<" "<<1+PE.at(i)<<endl;
    }

    return 0;
}