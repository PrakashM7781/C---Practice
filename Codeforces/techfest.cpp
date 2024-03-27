#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can do it.
    int arr[8] = {1, 1, 2, 2, 3, 5, 5, 5};
    int x;
    cin >> x;

    unordered_map<int, int> mp;
    for (int i : arr)
    {
        mp[i]++;
    }

    if (mp.find(x) != mp.end())
    {
        cout << mp[x];
    }
    else
    {
        cout << "Element Does not Exits";
    }

    return 0;
}