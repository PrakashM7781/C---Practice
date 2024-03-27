#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[6];
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array"<< endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout << "Enter the key you want to search: ";
    cin >> key;
    int found = search(arr, size, key);
    if(found){
        cout << "Key is present";
    }else{
        cout << "Key is not present";
    }
    return 0;
}
