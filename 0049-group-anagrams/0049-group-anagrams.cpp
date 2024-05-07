#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    array<int, 256> hash(string s) {
        array<int, 256> hash = {0};
        for (int i = 0; i < s.size(); i++) {
            hash[s[i]]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<array<int, 256>, vector<string>> mp;

        for (auto str : strs) {
            mp[hash(str)].push_back(str);
        }

        vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second);
        }

        return ans;
    }
};
