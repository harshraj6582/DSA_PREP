

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp;
        int curSum = 0;
        int count = 0;

        // Initialize the map with zero sum to handle cases when a subarray starts from index 0
        mp[0] = 1;

        for (int i = 0; i < n; i++) {
            curSum += arr[i];

            // Check if there exists a subarray sum that equals k
            if (mp.find(curSum - k) != mp.end()) {
                count += mp[curSum - k];
            }

            // Store the cumulative sum in the map
            mp[curSum]++;
        }

        return count;
    }
};
