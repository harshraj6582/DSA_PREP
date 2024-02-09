// #include <iostream>
// #include <vector>
// #include <unordered_set> 
// using namespace std;





///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This is basically using the technique such that if the current element is present in the array whose sum is equal to zero 
// We are going to return that array 

// bool subArrayExists(int arr[], int N)
// {
//     unordered_set<int> sumSet;

//     int sum = 0;
//     for (int i = 0; i < N; i++) {
//         sum += arr[i];

//         if (sum == 0 || sumSet.find(sum) != sumSet.end())
//             return true;

//         sumSet.insert(sum);
//     }
//     return false;
// }

// int main()
// {
//     int arr[] = {-3, 2, 3, 1, 6};
//     int N = sizeof(arr) / sizeof(arr[0]);

//     if (subArrayExists(arr, N))
//         cout << "Found a subarray with 0 sum";
//     else
//         cout << "No such maximum sub array is present in the array ";
//     return 0;
// }
