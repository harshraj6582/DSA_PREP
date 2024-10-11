class Solution {
public:
    int findMax(vector<int> &v) {
        int maxi = INT_MIN; 
        int n = v.size();

        // Find the maximum of the bananas 
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }

        return maxi; 
    }

    int calculateTotalHours(vector<int> &v, int hourly, int maxHours) {
        int totalH = 0;
        int n = v.size();
        
        // Find total hours and stop early if it exceeds maxHours:
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(v[i]) / (double)(hourly));
            
            // If the total hours already exceed maxHours, no need to continue
            if (totalH > maxHours) {
                return totalH;
            }
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        int low = 1, high = findMax(v);

        // Apply binary search:
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int totalH = calculateTotalHours(v, mid, h);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
