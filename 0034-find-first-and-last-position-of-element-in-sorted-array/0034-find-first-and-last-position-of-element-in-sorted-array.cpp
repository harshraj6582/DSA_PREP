class Solution {
public:

    int floor(vector<int>& arr , int x){
        int size = arr.size();
        int low = 0 ;
        int high = size - 1 ;
        int ans = -1 ; 
        int mid = low + (high - low) / 2 ;

        while(low <= high){
            if(arr[mid] == x){
                ans = mid ; 
                high = mid  - 1 ; 
                
            }
            else if (arr[mid] > x ){
                high = mid -1 ;
            }
            else{
                low = mid + 1 ;

            }
            mid = low + (high - low) / 2 ;
        }
        

        return ans ; 

        
    }

        int ceil(vector<int>& arr , int x){
        int size = arr.size();
        int low = 0 ;
        int high = size - 1 ;
        int ans = -1 ; 
        int mid = low + (high - low) / 2 ;

        while(low <= high){
            if(arr[mid] == x){
                ans = mid ; 
                low = mid + 1 ;
                
            }
            else if (arr[mid] < x ){
                low = mid + 1 ;
            }
            else{
                high = mid - 1  ;

            }
            mid = low + (high - low) / 2 ;

        }

        return ans ; 

        
    }






    vector<int> searchRange(vector<int>& nums, int x) {
        int size = nums.size();
        int first = floor(nums , x);
        int last = ceil(nums , x );

        vector<int> ans; 
        ans.push_back(first);
        ans.push_back(last);


        return ans ; 
        
    }
};