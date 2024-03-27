#include <bits/stdc++.h>
using namespace std;

bool solve(int arr[], int equality, int n)
{
    int sum = 0;
    if (arr[0] < equality)
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > equality)
        {
            sum += arr[i] - equality;
        }
        else if (arr[i] < equality)
        {
            if (arr[i] + sum >= equality)
            {
                sum -= equality - arr[i];
            }
            else
            {
                return false;
            }
        }
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int totSum = 0;
        for (int i : arr)
        {
            totSum += i;
        }
        int equality = totSum / n;
        bool ans = solve(arr, equality, n);
        if (ans)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}