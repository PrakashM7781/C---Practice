#include <bits/stdc++.h>
using namespace std;

int binaryToInt(string &a, int n)
{
    int num = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        num = num + ((a[i] - '0') * pow(2, count));
        count++;
    }

    // cout << num;
    return num;
}

string intToBinary(int num)
{
    string str = "";
    int rem = 0;
    while (num > 0)
    {
        rem = num % 2;
        cout << rem << " ";
        char ch = rem;
        str.push_back(ch);
        num = num / 2;
    }
    cout << str;
    // reverse(str.begin(), str.end());

    return str;
}

int main()
{
    // You can do it.
    string str = "10111";
    int num = binaryToInt(str, 5);
    cout << endl;
    cout << num << endl;

    string stree = intToBinary(num);
    // cout << stree;
    return 0;
}