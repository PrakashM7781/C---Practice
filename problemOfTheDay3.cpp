#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int key){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

vector<int> nextGreaterElement(int n, vector<int> A, int m, vector<int> B) {
    // Write your code here.
    vector<int> ans;
    cout << endl;
    for(int i = 0; i < A.size();i++){
        int found = binarySearch(B, A[i]);
        cout << found << " ";
        ans.push_back(B[found+1]);
    }
    return ans;
}


int main(){
   vector<int> arr1{1, 2, 0, 3, 4, 5};
   vector<int> arr2{3, 5, 0, 2, 1, 6, 4};
   int n = arr1.size();
   int m = arr2.size();
   vector<int> ans = nextGreaterElement(n,arr1,m,arr2);
   cout << endl;
   for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
   }
   return 0;
}