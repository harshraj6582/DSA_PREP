#include <vector>
#include <cmath> // For std::abs

class Solution {
public:
    vector<int> findClosestElements(std::vector<int>& arr, int k, int x) {
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
        
       
       auto   first = arr.begin() + l;
       auto    last = arr.begin() + h + 1;
        
        
        arr.assign(first, last);
        return arr ; 
    }
};
