#include <bits/stdc++.h>
using namespace std;

bool solve(int arr[], int n)
{
    int maxDiff = -1e9;
    for (int i = 1; i < n; i++)
    {
        int currDiff = abs(arr[i] - arr[i - 1]);
        maxDiff = max(maxDiff, currDiff);
    }

    if (maxDiff >= 4 || maxDiff <= 1)
    {
        return false;
    }
    return true;
}

int main()
{
    // You can do it.
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool ans = solve(arr, n);
        if (ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}