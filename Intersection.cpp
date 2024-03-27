#include<iostream>
#include<vector>
using namespace std;

vector<int> findIntersection(vector<int> arr1, int n, vector<int> arr2, int m){
    vector<int> ans;
    int i, j;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]< arr2[j]){
            i++;
            break;
        }else{
            j++;
        }
    }return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr1{1,2,3,4,5,6};
    vector<int> arr2{2,2,3,3};
    int n = 6;
    int m = 4;
    vector<int> ans = findIntersection(arr1, n, arr2, m);
    for(int i = 0; i < 2; i++){
        cout << ans[i];
    }
    return 0;
}
