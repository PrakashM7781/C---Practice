#include <iostream>
#include <vector>
using namespace std;

// bool isPossible(vector<int> arr, int n, int m, int mid){
//     int sum = 0;
//     int studentCount = 1;
//     for(int i = 0; i<n; i++){
//         if(sum+arr[i]<=mid){
//             sum = sum + arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount>m && arr[i]>mid){
//                 return false;
//             }
//             sum = arr[i];
//         }
//     }
//     return true;
// }

// int bookAllocation(vector<int> arr, int n, int m){

//     int start = 0;

//     int sum = 0;
//     int ans = -1;
//     for(int i = 0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     int end = sum;
//     int mid = start + (end - start)/2;
//     while(start <= end){
//         if(isPossible(arr, n, m, mid)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return ans;

// }

// int main(int argc, char const *argv[])
// {
//     vector<int> arr{12, 34, 67, 90};
//     int n = 4;
//     int m = 2;
//     int allocated = bookAllocation(arr, n , m);
//     cout<< allocated;
//     return 0;
// }

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    // cout << "checking for mid "<< mid <<endl;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        if (studentCount > m)
        {
            return false;
        }
        // cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            // cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,2,3,1};
    int n = 5;
    int m = 3;
    int allocated = allocateBooks(arr, n, m);
    cout << allocated;
    return 0;
}
