#include<iostream>
using namespace std;

int firstLastOccurence(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    int ans = 0;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(k > arr[mid]){
            s = mid + 1;
        }
        else if(k < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1,1,2,3,4};
    int k = 2;
    int ans = firstLastOccurence(arr, 5, k);
    cout << ans; 
    return 0;
}
