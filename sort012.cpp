#include <bits/stdc++.h> 
using namespace std;


void sort012(int *arr, int n)
{
   //   Write your code here
   int arr2[3] = {0};
    for(int i = 0; i < n; i++){
        arr2[arr[i]]++;
    }

    // for(int i = 0; i < 3; i++){
    //     cout << arr2[i] << " ";
    // }

    cout << endl;
    int j = 0;
    int i = 0;
    while(arr2[0] > 0){
        arr[j++] = 0;
        arr2[0]--;
        
    }
    while(arr2[1] > 0){
        arr[j++] = 1;
        arr2[1]--;
        
    }
    while(arr2[2] > 0){
        arr[j++] = 2;
        arr2[2]--;
        
    }
}

int main(int argc, char const *argv[])
{
    int arr[6] = {0,1,2,2,1,0};
    sort012(arr, 6);
    cout << endl;
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
