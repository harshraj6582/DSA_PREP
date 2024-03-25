#include <vector>
#include <cmath> // For std::abs

class Solution {
public:
    std::vector<int> findClosestElements(std::vector<int>& arr, int k, int x) {
        int l = 0;
        int size = arr.size();
       vector<int> result;
        int h = size - 1;
        
        // Using sliding window approach
        while (h - l >= k) {
            if (abs(x - arr[l]) > abs(arr[h] - x)) {
                // The difference is larger for the element at 'l', so move 'l'
                l++;
            } else {
                // The difference is larger for the element at 'h', so move 'h'
                h--;
            }
        }
        
        // Copy k elements starting from 'l' into the result vector
        for (int i = l; i <= h; ++i) {
            result.push_back(arr[i]);
        }
        
        return result;
    }
};
