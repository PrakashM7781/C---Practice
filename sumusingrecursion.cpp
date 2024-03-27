#include<bits/stdc++.h>
using namespace std;

int sumUsingRecursion(int *arr, int n){
    if(n == 1){
        return arr[0];
    }

    int sum = 0;
    sum = arr[0] + sumUsingRecursion(arr+1, n-1);
    return sum;
}

int main(int argc, char const *argv[])
{
    int arr[6] = {1,2,3,4,5,6};
    int sum = sumUsingRecursion(arr, 6);
    cout << sum;
    return 0;
}
