class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();

        // Sort the given intervals 
        sort(arr.begin() , arr.end());

        vector<vector<int>> ans ; 

        for(int i = 0 ; i < n ; i++){
            int start = arr[i][0];
            int end = arr[i][1];

            // Skip all the Merged Intervals 
            if(!ans.empty() && end <= ans.back()[1]){
                continue ; 
            }

            // Now check for the Rest of the Intervals 
            for(int j = i + 1 ; j < n ; j++){
                if(arr[j][0] <= end){
                    end = max(end , arr[j][1]);
                }
                else{
                    break ;
                }
            }
            ans.push_back({start, end});
        }
        return ans ; 
    }
};