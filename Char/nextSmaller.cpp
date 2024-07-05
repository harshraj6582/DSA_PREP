#include<iostream>
#include<stack>
#include<vector>
using namespace std ;


vector<int> nextSmaller(vector<int> a , stack<int> &st){
// We have th Traverse the Array from the Rear Side 
int size = a.size() ;
vector<int> arr ; 
    for(int i = size - 1 ; i >=0 ; i--){
        // This is used to Traverse the whole array 
        while(st.top() >= a[i]){
            st.pop();
        }
        // Now the Element is smaller than the Array element 
        arr.push_back(st.top());
        // Now Push Back the Stack Element 
        st.push(a[i]);
    }
    return arr;

}

int main(){
    vector<int> a = {2,1,4,6,3};
    stack <int> st ;
    st.push(-1);
    vector<int> arr ;
    arr =  nextSmaller(a , st);
   
    for(auto it : arr){
        cout<<it<<endl;
    }
    return 0 ;
}
