
class Solution {
public:
    

    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
        // Collision will occur in only of the two possible cases when there is 
        // One of the Asteroid is moving Right while the ohter one is Moving left 
        stack<int>st ;
        for(auto ast : asteroids)
        {
            bool destroy = false ;
            if(ast > 0)
            {
                // Will Push all the Elements in the Array if any of the following is 
                // just posotive 
                st.push(ast);
            }
            else
            {
                // This is a Negative Asteroid 
                if(st.empty() || st.top() < 0 ){
                    // This means at the top of the Stack is also Negative 
                    // So push the element 
                    st.push(ast);
                }
                else
                 {
                    // This is the case of Collision 
                    while(!st.empty() && st.top() > 0){
                        // The Asteroid which is just comming is Negative and 
                        // The Top of the Stack is Positive
                        if(abs(ast) == st.top())
                        {
                            destroy = true ;
                            st.pop();
                            break ; 
                        }
                        else if (abs(ast) > st.top()){
                            // This means the Asteroid is just heavier 
                            st.pop();
                            
                        }
                        else{
                            destroy = true ;
                            break ; 
                        }
                    }
                    if(!destroy){
                        st.push(ast);
                    }

                }
            }

        }
         
        // Now the Stack Contains the Element in the Reverse Order 
        vector<int>ans(st.size());
        for(int i = st.size() -1  ; i >= 0 ; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans ; 

    }
};
