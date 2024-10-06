class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int nums_size = nums.size();
        // int pos = 0;
        // int neg = 1;
        // vector<int> final(nums_size); 
        // for(int i = 0; i < nums_size; i++) {
        //     if(nums[i] > 0) {
        //         final[pos] = nums[i];
        //         pos = pos + 2;
        //     }
        //     else {
        //         final[neg] = nums[i];
        //         neg = neg + 2;
        //     }
        // }

        // return final;

        vector<int> pos ; 
        vector<int> neg ; 
        vector<int> ans ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] >= 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int j = 0 ;
        int k = 0 ; 
        // Now we basically have 2 Arrays One is Negative and the Other one is Positive 
        for(int i = 0 ; i < nums.size() ; i = i+ 2 ){
            ans.push_back(pos[j]);
            j++ ; 
            ans.push_back(neg[k]);
            k++;
             
        }

        return ans ; 
    }
};
