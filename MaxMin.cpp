#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int maxi = INT_MIN;
    // cout << max;
    for(int i = 0; i<size; i++){
        // if(arr[i]>max){
        //     max = arr[i];
        maxi = max(maxi, arr[i]); //can also be done like this
        }
    return maxi;
}
int main()
{
    int arr[10];
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Maximum value in array is: " << getMax(arr, size) << endl;
    return 0;
}
