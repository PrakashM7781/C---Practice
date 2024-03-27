#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        int j = n - 1;
        while (s[i] != 'B')
        {
            i++;
        }
        while (s[j] != 'B')
        {
            j--;
        }

        cout << j - i + 1 << endl;
    }
    return 0;
}