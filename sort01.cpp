#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sort01(int *arr, int n){
    int i = 0;
    int j = n - 1;
    while(i < j){
        if(arr[i] == 0 ){
            i++;     
        }
        else if(arr[j] == 1){
            j--;
        }
        else{
            swap(arr[i], arr[j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {0,1,0,1,0};
    sort01(arr, 5);
    for(int i = 0; i < 5; i++){
        cout << arr[i];
    }
    return 0;
}
