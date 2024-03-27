#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int compress(vector<char> &chars)
{
    vector<char> temp;
    int ch[26] = {0};
    for (int i = 0; i < chars.size(); i++)
    {
        int count = chars[i] - 'a';
        ch[count]++;
    }
    int j = 0;
    int count = 0;
    while (j < chars.size())
    {
        if (j % 2 == 0)
        {
            count = chars[j] - 'a';
            temp.push_back(chars[j]);
        }
        else
        {
            char cn = char(ch[count]);
            temp.push_back(cn);
            cout << ch[count] << endl;
            j = j + count;
        }
        j++;
    }
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }
    return temp.size();
}

int main(int argc, char const *argv[])
{
    vector<char> chars{'a','a','b','b','b','c','c','c'};
    int count = compress(chars);
    cout << endl << count;
    return 0;
}
