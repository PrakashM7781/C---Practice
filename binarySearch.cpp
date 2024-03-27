#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if(arr[mid] == key){
            
            return mid;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return -1;
    
}

int main()
{
    int evenarr[6] = {1,5,6,8,13,19};    
    int oddarr[5] = {1,2,3,6,15};    
    int search = binarySearch(evenarr, 6, 8);
    cout << search;
    return 0;
}
