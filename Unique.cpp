// Unique occurence in an array
#include <iostream>
using namespace std;

// int main()
// {
//     int arr[6];
//     for(int i = 0; i<6; i++){
//         cin >> arr[i];
//     }
//     int uniq=0;
//     //Searching for a unique element
//     for(int i=0; i<5; i++){
//         uniq = uniq^arr[i];         //Searches the elemnt for odd presence
//     }
//     cout << "Unique element is: " << uniq;
//     return 0;
// }

void selectioSort(int array[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp;
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    selectioSort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

// Unique number of occurence

// int uniqNoOccurence(int arr[], int size){

// }
