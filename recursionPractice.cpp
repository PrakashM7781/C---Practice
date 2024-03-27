#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// bool found(int arr[], int n){
//     for(int i = 0; i < 5; i++){
//         if(arr[i] == n){
//             return true;
//         }
//     }
//     return false;
// }
// int lowestInt(int arr[],int n){
//     while(true){
//     if(!found(arr,n)){
//         return n;
//     }
//     else{
//         n++;
//     }
//     }
//     return n;
// }
int main(int argc, char const *argv[])
{
    int arr[4] = {3,4,-1,1};
    int n = 4;
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){ 
        cout << arr[i] << " ";
    }
    int x=1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            x++;
        }
    }
    cout << endl << x;
    return(x);
}
