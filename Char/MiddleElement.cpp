void deleteStack(stack<int>&s, int &mid_element){
        // Base Case 
        if(mid_element == 0 ){
           
            return ; 
        }
        // Single Case 
        int temp = s.top(); // Storing it for ReInsertion
        s.pop(); // Removal of the Last Element 
        mid_element--;
        // Function Call 
        deleteStack(s , mid_element);
        if(mid_element!= 1){
            s.push(temp);
        }
        
    }