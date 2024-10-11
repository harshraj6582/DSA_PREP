class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        // Peak element is an element that is strictly greater than its neighbors
        // We can have the condition in which the Left and right is lesser than the Arr[mid]
    int n = arr.size(); //Size of array.

    // Edge cases:
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;

        //If arr[mid] is the peak:
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;

        // If we are in the left:
        if (arr[mid] > arr[mid - 1]) low = mid + 1;

        //
        else high = mid - 1;
    }
    
    return -1;
        
    }
};