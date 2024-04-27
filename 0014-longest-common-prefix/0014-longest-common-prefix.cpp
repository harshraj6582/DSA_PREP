class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        // The Concept is using that the array is sorted in the 
        // Lexicographically Order which means that the main difference will 
        // only occur in the first and the last String 
        // So we are just comparing the first and the last element 
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};