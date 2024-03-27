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
        string s, f;
        cin >> s;
        cin >> f;
        int ans = 0;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && f[i] == '0')
            {
                ones++;
                ans++;
            }
            else if (s[i] == '0' && f[i] == '1')
            {
                if (ones > 0)
                {
                    ones--;
                }
                else
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}