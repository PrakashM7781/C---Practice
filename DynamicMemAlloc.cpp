#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;


    int **arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    //Taking iNput
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    //Output
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    //Releasing Memory of a heap
    for(int i = 0; i < n; i++){
        delete [] arr[i];
    }

    // Releasing memory of Pointers
    delete []arr;

    return 0;
}
