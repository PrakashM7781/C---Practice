#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
    
    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++){
        if(arr[i] <= pivot){
            count++;
        }
    } 
    
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);


    int indexStart = start;
    int indexEnd = end;
    while(indexStart < pivotIndex && indexEnd > pivotIndex){
        while(arr[indexStart] <= pivot){
            indexStart++;
        }
        while(arr[indexEnd] > pivot){
            indexEnd--;
        }
        if(indexStart < pivotIndex && indexEnd > pivotIndex){
            swap(arr[indexStart], arr[indexEnd]);
            indexStart++;
            indexEnd--;
        } 
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    if(start >= end){
        return;
    }

    int pivot = partition(arr, start, end);

    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main()
{
    int arr[7] = {3,1,4,5,2,6,9};
    quickSort(arr, 0, 6);

    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}




