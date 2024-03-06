class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int nums_size = nums.size();
        int pos = 0;
        int neg = 1;
        vector<int> final(nums_size); 
        for(int i = 0; i < nums_size; i++) {
            if(nums[i] > 0) {
                final[pos] = nums[i];
                pos = pos + 2;
            }
            else {
                final[neg] = nums[i];
                neg = neg + 2;
            }
        }

        return final;
    }
};
