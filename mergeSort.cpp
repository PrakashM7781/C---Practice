#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int originalArrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[originalArrayIndex++];
    }

    originalArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[originalArrayIndex++];
    }

    originalArrayIndex = s;
    int idx1 = 0;
    int idx2 = 0;
    while(idx1 < len1 && idx2 < len2){
        if(first[idx1] < second[idx2]){
            arr[originalArrayIndex++] = first[idx1++];
        }
        else{
            arr[originalArrayIndex++] = second[idx2++];
        }
    }
    while(idx1 < len1){
        arr[originalArrayIndex++] = first[idx1++];
    }
    while(idx2 < len2){
        arr[originalArrayIndex++] = second[idx2++];
    }
}

void mergeSort(int *arr, int s, int e){
    if(s >= e){
        return;
    }

    int mid = (s + e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

// void merge(vector<int> arr, int start, int end)
// {
//     int mid = start + (end - start) / 2;

//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     int originalArrayIndex = start;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[originalArrayIndex++];
//     }

//     originalArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[originalArrayIndex++];
//     }

//     int index1 = 0;
//     int index2 = 0;
//     originalArrayIndex = start;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[originalArrayIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[originalArrayIndex++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[originalArrayIndex++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[originalArrayIndex++] = second[index2++];
//     }

//     delete[] first;
//     delete[] second;
// }

// void mergeSort(vector<int> &arr, int n)
// {
//     int start = 0;
//     int end = n - 1;

//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     mergeSort(arr, len1);
//     mergeSort(arr, len2);

//     merge(arr, start, end);
// }

int main(int argc, char const *argv[])
{
    
    // int n;
    // cin >> n;
    // vector<int> arr{5,7,3,9,1};
    int arr[5] = {5,7,3,9,1};
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;


    mergeSort(arr, 0, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
