class Solution {
public:

    bool possible(vector<int> & arr , int day , int m , int k){
        int n = arr.size();
        int cnt = 0 ;
        int noOfB = 0 ;

        // Count the number of Bouquets 
        for(int i = 0 ; i < n ; i++){
            if(arr[i] <= day){
                cnt++;
            }
            else{
                noOfB += (cnt/ k);
                cnt = 0 ;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }




    int minDays(vector<int>& arr, int m, int k) {

        long long val = m * 1ll * k * 1ll ;
        int n = arr.size(); 
        if(val > n ) return -1 ; // This is the case in which the number of required bouquets is more than the array size 

        // Find the Maximum as well as the Minimum 
        int mini = INT_MAX ; 
        int maxi = INT_MIN ; 

        for(int i = 0 ; i < n ; i++){
            mini = min(mini , arr[i]);
            maxi = max(maxi , arr[i]);
        }

        
        int low = mini , high = maxi ; 
        while(low <= high) {
            int mid = (low + high) / 2 ;
            if(possible(arr , mid  , m ,  k )){
                high = mid - 1 ; 
            }
            else{
                low = mid + 1 ;
            }
        }
        return low ; 


        return -1 ; 

    }
};