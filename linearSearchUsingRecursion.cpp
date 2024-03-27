#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int k){
    if(n == 0){
        return 0;
    }

    if(arr[0] != k){
        int remainingPart = linearSearch(arr+1, n-1, k);
        return remainingPart;
    }
    else{
        return 1;
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[6] = {1,2,3,4,5,6};
    int found = linearSearch(arr, 6, 9);
    cout << found;
    return 0;
}
