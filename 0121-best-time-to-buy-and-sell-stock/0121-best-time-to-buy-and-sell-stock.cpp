class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // // Brute Force for this solution uses Nested Loops 
        // int profit = 0 ;
        // int size = prices.size();
        // for(int i = 0 ; i < size -1 ; i++){
        //     for(int j = i+1 ; j < size ; j++){
        //         int ans = 0 ;
        //          ans = prices[j] - prices[i];
        //         if(ans > profit){
        //             profit = ans ; 
        //         }
        //     }
        // }
        // return profit ; 
        
       ///////KADANE ALGO /////////////////////////////
//         Firstly We will set the buying Stock at the First Starting of the of the Parameter 
//         Then Will will Set the profit to intially 0 As there hasn't been any sort of transaction 
//         // POSIIBLE TWO CASES---
//             Either BUY > PRICES[I]------ This Means our Purchase is Higher So We can update the Buyong                                          Price
//             BUY < PRICES[i]--------------This Means The Selling Price is Higher than the Cost Price
//                                          So we can Check for the COndition is Profit is Higher than                                            the Max Profit 
                                            
        // int cp = prices[0];
        // int size = prices.size();
        // int profit = 0 ;
        // // Minimum Profit 
        // for(int i = 1 ; i < size ; i++){
        //     // TWO CASES 
        //     if(cp>prices[i]){
        //         cp = prices[i];
        //     }
        //     else if (prices[i] - cp > profit){
        //         profit = prices[i] - cp ;
        //     }
        // }
        // return profit ; 
        
    int cp = prices[0];
    int size = prices.size();
    int profit = 0 ;
    for(int i =1 ; i < size ; i++){
        if(cp > prices[i]){
            cp = prices[i];
        }
        else if (prices[i] - cp > profit ){
            profit = prices[i] - cp ; 
        }
    }
    return profit ; 

    }
    
};