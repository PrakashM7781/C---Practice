#include <bits/stdc++.h>
using namespace std;

int solve(string str)
{
    if (str.size() < 3)
    {
        return 0;
    }
    int ans = 0;
    int i = 0;
    while (i <= str.size() - 2)
    {
        string s = str.substr(i, 3);

        if (s == "map" || s == "pie")
        {
            ans++;
            i += 3;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = solve(str);
        cout << ans << endl;
    }
    return 0;
}