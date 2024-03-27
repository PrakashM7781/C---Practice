#include<iostream>
#include<vector>
using namespace std;

// void sort(int n, vector<int> &arr){
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n;j++){
//             if(arr[j]< arr[i]){
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements of array" << endl;
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//         if(arr[i] > n-1){
//             cout << "Kuch Bhi";
//             break;
//         }
//     }
//     sort(n, arr);
//     for(int i = 0; i<n; i++){
//         if(arr[i] == arr[i+1]){
//             cout << "Duplicate found: " << arr[i]<< endl;
//         }
//     }

//     return 0;
// }




// int findDuplicate(int arr[], int n){
//     int maxi = INT_MIN;
//     for(int i = 0; i<n; i++){
//         maxi = max(maxi, arr[i]);
//     }
//     cout << maxi;
//     int duplicate = n - maxi + 1;
//     int ans = 0;
//     if(duplicate%2!=0){
//         for(int i = 0; i<n; i++){
//             ans = ans^arr[i];
//         }
//     }else{
//         for(int i = 0; i<n; i++){
//             ans = ans^arr[i];
//         }
//         for(int i = 1; i<=maxi; i++){
//             ans = ans^i;
//         }
//     }
//     return ans;
// }





// void findDuplicate(vector<int> &arr, int n){
// 	for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(arr[j] <= arr[i]){
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i] == arr[i+1]){
//             cout << arr[i];
//             break;
//         }
       
//     }
    
// }


// int main(int argc, char const *argv[])
// {
//     int n = 6;
//     vector<int> arr{1,3,2,3,4,3};
//     // int array[6] = {1,1,1,2,3,1};
//     findDuplicate(arr, n);
//     return 0;
// }



//-----------------Peigonhole sort algorithm------------


// int duplicate(vector<int> &arr, int n){
//     int dup = 0;
//     int ans[n] = {0};
//     for(int i = 0; i<n; i++){
//         int select = arr[i];
//         ans[select]++;
//     }
//     for(int i = 0; i<n; i++){
//         if (ans[i]>1)
//         {
//             dup = i;
//             break;
//         }
        
//     }
//     return dup;
// }



int findDuplicate(vector<int> &arr, int n){
    for(auto i : arr){
        i = abs(i);
        if(arr[i] < 0) return i;
        arr[i] = -arr[i];
    }
    return -1;
    }

int main()
{
    int n = 5;
    vector<int> arr{1,1,3,2,1};
    int ans = findDuplicate(arr, n);
    cout << ans;
    return 0;
}
