#include<iostream>
using namespace std;

bool binarySearch(int *arr, int n, int k){
    int start = 0;
    int end = n - 1;
    bool found;
    if(start > end){
        return 0;
    }

    int mid = start + (end - start)/2;
    if(arr[mid] == k){
        return 1;
    }
    else if(arr[mid] > k){
        found = binarySearch(arr, n - 1 - mid, k);
        // return found;    
    }
    else{
        found = binarySearch(arr + mid, n - 1, k);
        // return found;
    }
    return found;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    bool binary = binarySearch(arr, 5, 1);
    cout << binary;
    return 0;
}
