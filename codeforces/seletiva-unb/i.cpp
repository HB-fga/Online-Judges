// WRONG ANSWER

#include <bits/stdc++.h>
#include <chrono>
#include <thread>

using namespace std;

void sorting(int *vec, int start, int end)
{
    int swap;

    // std::this_thread::sleep_for (std::chrono::seconds(1));

    cout << endl;
    cout << "start = " << start << endl;
    cout << "end = " << end << endl;

    if( end - start <= 2 )
    {
        cout << "retorno\n";
        return;
    }
    else
    {
        for(int i = start; i < end/2; i+=2)
        {
            cout << "\ni = " << i << endl;
            cout << "end/2 = " << end/2 << endl;

            swap = vec[i+1];
            vec[i+1] = vec[(end/2)+i];
            vec[(end/2)+i] = swap;
        }
    }

    for(int i = 0; i < 8; i++)
    {
        if(i == 0) cout << vec[i];
        else cout << " " << vec[i];
    }

    if( (end/2)-start > 2 )
    {
        // cout << "novo\n";
        sorting(vec, start, (start + end/2)/2);
        sorting(vec, (start + end/2)/2, end);
    }

    return;
}
int main()
{
    int n, start, end;
    int vec[262244];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> vec[i];

    start =0;
    end = n;
    sorting(vec, start, end);

    for(int i = 0; i < n; i++)
    {
        if(i == 0) cout << vec[i];
        else cout << " " << vec[i];
    }
    
    cout << endl;

    return 0;
}