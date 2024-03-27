#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int* arr, int sum, int n){
    int subset[n][sum];

    for(int i = 0; i < n; i++){
        subset[i][0] = 1;
    }

    for(int i = 1; i < n; i++){
        subset[0][i] = false;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(j < arr[i - 1]){
                subset[i][j] = subset[i-1][j];
            }
            if(j >= arr[i-1]){
                subset[i][j] = subset[i-1][j] || subset[i - 1][j - arr[i - 1]];
            }
        }
    }
    return subset[n][sum];
}

int main(){
   //You can do it.
   int arr[5] = {3,5,7,10,12};
   int sum = 15;
   int n = 5;

   bool ans = subsetSum(arr, sum, n);
   cout << ans;

   return 0;
}