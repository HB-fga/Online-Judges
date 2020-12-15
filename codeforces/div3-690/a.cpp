#include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

int main () {

    int n, s, size, num;
    queue <int> left;
    stack <int> right;
    
    cin >> n;

    while(n--)
    {
        cin >> size;
        
        for(int i = 0; i < size; i++)
        {
            cin >> num;

            if(i < (size/2 + size%2))
            {
                // cout << "LEFT! = " << i << endl;
                left.push(num);
            }
            else
            {
                // cout << "RIGHT! = " << i << endl;
                right.push(num);
            }
        }

        s = 0;
        while(size--)
        {
            if(!s)
            {
                s++;
                cout << left.front() << " ";
                left.pop();
            }
            else
            {
                s--;
                cout << right.top() << " ";
                right.pop();
            }
        }

        cout << endl;
    }

    return 0;
}