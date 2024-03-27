#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int l, int r, int k)
{
        sort(arr, arr + (r + 1));
        return arr[k-1];
}

int main(int argc, char const *argv[])
{
    int arr[6] = {7,10,4,3,20,15};
    int small = kthsmallest(arr, 0, 5, 5);
    cout << small << endl;


    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
