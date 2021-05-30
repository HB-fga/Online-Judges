#include <bits/stdc++.h>

using namespace std;

int count_ones(string x)
{
    int c = 0;

    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == '1') c++;
    }

    return c;
}

char flip_bit(char x)
{
    if(x == '1')
        x = '0';
    else
        x = '1';

    return x;
}

string my_and(string a, string b)
{
    string c = a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '1' && b[i] == '1')
            c[i]='1';
        else
            c[i]='0';
    }
    return c;
} 

int main() {

    int size, n;
    //unsigned long zero_n, nums_n[100010];
    string zero, nums[100010];// num;

    int bit = 1;
    int flag;
    // unsigned long andd_n;
    string andd;

    cin>>size;
    cin>>zero; 
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>nums[i];

        // cin>>num; 
        // nums_n[i] = (int) bitset<64>(num).to_ulong();

        // cout << "stored number: " << nums_n[i]<<endl;
    }
    
    for(int i = 0; i < size; i++)
    {
        flag = 1;

        // cout<<"zero before flip: " << zero << endl;
        zero[bit-1] = flip_bit(zero[bit-1]);
        // cout<<"zero after flip: " << zero << endl;
        
        // zero_n = (int) bitset<64>(zero).to_ulong();

        for(int i = 0; i < n; i++)
        {
            andd = my_and(zero, nums[i]);

            // andd_n = (zero_n & nums_n[i]);
            // andd = std::bitset<64>(andd_n).to_string();

            // cout<<"and number "<<i<<": " << andd_n << endl;
            // cout<<"and string "<<i<<": " << andd << endl;

            if (count_ones(andd)%2 != 0)
            {
                // cout << "and number "<<i<< "had odd bits" << endl;
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            // cout<<"YAY!!!"<<endl;
            break;
        }
        else
        {
            zero[bit-1] = flip_bit(zero[bit-1]);
            bit++;
        }
    }

    if(flag)
    {
        cout<<bit<<endl;
    }
    else
    {
        cout<<"-1\n";
    }

    return 0;
}