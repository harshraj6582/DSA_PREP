class Solution {
public:
    int countPrimes(int n) {
        // Checking for the edge case 
        if(n == 0 ){
            return 0 ;
        }
        vector<bool>prime(n,true);
        // Intialisig the vector with the size of N and all the option with TRUE
        prime[0]=prime[1] = false ;
        // As 0 and 1 are not the prime Number 
        
        int ans = 0 ;
        
        
        for(int i = 2 ; i < n ; i++){
            if(prime[i]){
                ans++; 
            
            int j = i*2 ;
            
            // Creating a Table of Each Number to mark the Non Prime 
            while(j < n){
                prime[j] = false ; 
                j += i ; 
            }
        }
            }
        
        return ans ; 
    }
};