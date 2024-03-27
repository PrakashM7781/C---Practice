#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool sort = isSorted(arr+1, n-1);
        return sort;
    }
    return true;

}

int main(int argc, char const *argv[])
{
    int arr[6] = {2,6,7,9,11,36};
    bool sort = isSorted(arr, 6);
    cout << sort;
    return 0;
}
