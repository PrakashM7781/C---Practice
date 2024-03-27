#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c)
{
    int ans = a;
    int leftOver = 0;
    if (b % 3 == 0)
    {
        ans += b / 3;
        if (c % 3 != 0)
        {
            ans += c / 3 + 1;
        }
        else
        {
            ans += c / 3;
        }
    }
    else
    {
        ans += b / 3;
        leftOver = b % 3;
        if (leftOver + c < 3)
        {
            return -1;
        }
        else
        {
            int totalLeft = leftOver + c;
            if (totalLeft % 3 == 0)
            {
                ans += totalLeft / 3;
            }
            else
            {
                ans += totalLeft / 3 + 1;
            }
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
        int a, b, c;
        cin >> a >> b >> c;

        int ans = solve(a, b, c);
        cout << ans << endl;
    }
    return 0;
}