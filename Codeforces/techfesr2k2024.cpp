#include <bits/stdc++.h>
using namespace std;

int main()
{
    // You can do it.
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int smaller = 0;
    int larger = 0;
    int j = n - 1;
    int i = 0;
    while (j > 0)
    {
        larger += arr[j];
        j--;
    }
    while (i < n - 1)
    {
        smaller += arr[i];
        i++;
    }
    cout << smaller << " " << larger;

    return 0;
}