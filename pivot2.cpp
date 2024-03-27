#include<iostream>
#include<vector>
using namespace std;

int pivotElem(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s)/2;
    while(s<e){

        if(arr[mid] < arr[0]){
            e = mid;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    vector<int> a{3,2,10,17,1};
    int pivot = pivotElem(a);
    cout<< pivot;
    return 0;
}
