#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    for(int i = 0; i<(size/2)+1; i++){
        swap(arr[i], arr[size-1-i]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
       cout << arr[i] << " "; 
    }
}

int main()
{
    int arr[6];
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array"<< " ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    reverse(arr, size);
    cout << "Reversed array is: ";
    
    printArray(arr, size);
    return 0;
}

