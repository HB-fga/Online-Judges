#include <bits/stdc++.h>

using namespace std;

int main()
{
    char problem;
    int score, p, t, yes, no;
    int hist[40];
    int flag = 0;

    cin >> p >> t;

    for( int i = 0; i < 40; i++ )
    {
        hist[i] = 0;
    }

    for(int i = 0; i < t; i++)
    {
        yes = no = 0;
        for(int j = 0; j < p; j++)
        {
            cin >> problem;
            cin >> score;

            // cout<<"["<<problem<<score<<"]";

            if(score > 0)
            {
                hist[problem-'A']++;
                no = 1;
            }
            else
            {
                yes = 1;
            }
            
        }
        if(no == 1 && yes == 1){}
        else
        {
            flag = 1;
        } 
    }

    for( int i = 0; i < p; i++ )
    {
        if(hist[i] == 0)
        {
            flag = 1;
        }
    }

    if( flag == 1 )
        cout << "...\n";
    else
        cout << "Perfeita!\n";

    return 0;
}