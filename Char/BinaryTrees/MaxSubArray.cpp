    // int lenOfLongSubarr(int A[],  int N, int K) 
    // { 
        
    //     int len = 0;
    //     int start = 0 ;
    //     int end = -1 ;
    //     unordered_map<int , int > mp ; 
    //     int cursum = 0 ;
    //     for(int i = 0 ; i < N ; i++){
    //         cursum += A[i];
    //         // This is basically used to get the Value of the Entire Array 
            
    //         // This condition is basically used to check whether the Current Sum is just equal to the K 
    //         if(cursum == K){
              
                 
    //             len = (i + 1 );
    //         }
            
    //         if(mp.find(cursum - K) != mp.end()){
    //             // This means that the K is laso present we are jsut implementing the reverse Maths 
    //             int start = mp[cursum - K] + 1;
    //             end = i ;
    //             if(end - start + 1 > len ){
    //                 len = (end - start + 1 );
    //             }
                
                
                
    //         }
    //          if (mp.find(cursum) == mp.end()) {
    //         mp[cursum] = i;
    //     }
    //     }
        
    //     return len ; 
    // } 