/*
//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1193
https://codeforces.com/problemset/problem/5/B
https://atcoder.jp/contests/arc103/tasks/arc103_a
https://www.urionlinejudge.com.br/judge/pt/problems/view/1242
*/

#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {

    string a, b;
    char x;
    int hg[30]={};

    while(!cin.eof())
    {
        cin>>a>>b;

        for(int i=0;i<30;i++)
        {
            hg[i]=0;
        }

        for(int i=0;a[i]!=0;i++)
        {
            if(hg[a[i]-'a']==0)
            {
                hg[a[i]-'a']++;
            }
        }

        for(int i=0;b[i]!=0;i++)
        {
            if(hg[b[i]-'a']==1)
            {
                hg[b[i]-'a']++;
            }
        }

        for(int i=0;i<30;i++)
        {
            if(hg[i]==2)
            {
                x=i+'a';
                cout<<x;
            }
        }
        cout<<endl;
    }

    return 0;
}