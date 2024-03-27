#include <bits/stdc++.h>
using namespace std;

char getLetter(int idx)
{
    return 'a' + (idx - 1);
}

void solve(int n)
{
    string ans = "";
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                int sum = i + j + k;
                if (sum == n)
                {
                    cout << getLetter(i) << getLetter(j) << getLetter(k);
                    return;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}
