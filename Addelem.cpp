        // SUM OF ALL EMENTS IN AN ARRAY

// #include<iostream>
// using namespace std;

// int addElement(int arr[], int size){
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main()
// {
//     int arr[6];
//     int size;
//     cout << "Enter the size of an array: ";
//     cin >> size;
//     for(int i = 0; i<size; i++){
//         cin >> arr[i];
//     }

//     int sum = addElement(arr, size);
//     cout << "The sum of all the element of an array is: " << sum;
//     return 0;
// }



       //SUM OF ALTERNATE ELEMENTS IN AN ARRAY 

#include<iostream>
using namespace std;

int sumofAltElem(int arr[], int size){
    int sumeve = 0;
    for(int i = 0; i<size; i = i+2){
        sumeve = sumeve + arr[i];
    }
    return sumeve;
}

int main()
{
    int arr[6];
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    cout << "Enter the elements of array: ";
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    
    int sumeve = sumofAltElem(arr, size);
    cout << "The sum of alternate angle " << sumeve;
    return 0;
}
