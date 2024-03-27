#include <bits/stdc++.h>
using namespace std;

int minimumDistance(vector<int> arr, int x)
{
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int dist = abs(arr[i] - x);
        mini = min(mini, dist);
    }
    return mini;
}

int pcConnection(vector<int> pcDistance, vector<int> status)
{
    vector<int> arr;
    for (int i = 0; i < pcDistance.size(); i++)
    {
        if (status[i] != 0)
        {
            arr.push_back(pcDistance[i]);
        }
    }

    int sum = 0;
    for (int i = 0; i < status.size(); i++)
    {
        if (status[i] == 0)
        {
            int min = minimumDistance(arr, pcDistance[i]);
            sum += min;
            arr.push_back(pcDistance[i]);
        }
    }
    return sum;
}

int main()
{
    // You can do it.
    vector<int> pcDistance{1, 5, 6};
    vector<int> status{1, 0, 0};
    int distance = pcConnection(pcDistance, status);
    cout << distance;
    return 0;
}