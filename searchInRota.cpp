#include <iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int> arr)
{
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
    return arr[s];
}
int elemInRotatedArray(vector<int> arr, int n, int k)
{
    int start = 0;
    int end = arr.size() - 1;
    int pivot = pivotElement(arr);
    cout << pivot;
    int elementIndex;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (k > pivot && k < arr[n])
        {
            start = mid + 1;
        }
        else if (k < pivot && k > arr[0])
        {
            end = mid;
        }
        else
        {
            elementIndex = start;
            break;
        }
        mid = start + (end - start) / 2;
    }
    return elementIndex;
}

int main()
{

    vector<int> arr{7, 9, 1, 2, 3};
    int pivot = pivotElement(arr);
    cout << pivot << endl;
    int elem = elemInRotatedArray(arr, 5, 2);
    cout << elem << endl;
    return 0;
}




// Thodi Dikkat h Isme check krna h
