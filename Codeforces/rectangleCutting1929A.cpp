#include <bits/stdc++.h>
using namespace std;

bool solve(int l, int b)
{
    if (l % 2 == 0 && b % 2 == 0)
    {
        return true;
    }
    int nl, nb;
    if (l % 2 == 0)
    {
        nl = l / 2;
        nb = b * 2;
        if (nl == b && nb == l)
        {
            return false;
        }
    }
    else if (b % 2 == 0)
    {
        nb = b / 2;
        nl = l * 2;
        if (nl == b && nb == l)
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    return true;
}

int main()
{
    // You can do it.
    int t;
    std::cin >> t;
    while (t--)
    {
        int l, b;
        std::cin >> l >> b;
        bool ans = solve(l, b);
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}