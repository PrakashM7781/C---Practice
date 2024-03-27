// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// vector<vector<int>> median(vector<vector<int>> &matrix, int R, int C)
// {
//     sort(matrix.begin(), matrix.end());
//     // int medianIndex = 0;
//     return matrix;
// }

// int main(int argc, char const *argv[])
// {
//     vector<vector<int>> matrix{{1, 2, 4}, {4, 3, 9}, {7, 6, 9}};
//     vector<vector<int>> matr = median(matrix, 3, 3);

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++) { 
//             cout << matr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }





// CPP program to illustrate using
// std :: upper_bound with arrays
#include <bits/stdc++.h>
using namespace std;

// Main Function
int main()
{
	int arr[] = { 10, 20, 30, 40, 50 };

	// Print elements of array
	cout << "Array contains :";
	for (int i = 0; i < 5; i++)
		cout << " " << arr[i];
	cout << "\n";

	// using upper_bound
	int upper1 = lower_bound(arr, arr+5, 35) - arr;
	int upper2 = upper_bound(arr, arr+5, 45) - arr;

	cout << "\nupper_bound for element 35 is at position : "
			<< (upper1);
	cout << "\nupper_bound for element 45 is at position : "
			<< (upper2);

	return 0;
}

