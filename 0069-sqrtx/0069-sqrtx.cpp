class Solution {
public:
    int mySqrt(int x) {
        // We are using the Logic of Binary Search 
        int start = 1 ;
        int end = x/2;
        int mid = start + (end - start)/2;
        int ans = 0 ;
        if(x<=1){
            return x ;
            // This is used for the Special Cases
        }
        
        while(start<=end){
            if(mid == x/mid ){
                return mid ;
            }
            else if (mid  > x/mid){
                end = mid - 1 ;
            }
            else {
                ans = mid ;
                start = mid + 1 ;
            }
            mid = start + (end-start)/2;
        }
        
        return ans ;
        
        
    }
};