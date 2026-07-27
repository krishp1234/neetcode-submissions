class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        vector<vector<string>> group_anagram;
        for(auto i : strs){
            string key = i;
            sort(key.begin(), key.end());
            anagram[key].push_back(i);
        }
        for(auto i : anagram){
            group_anagram.push_back(i.second);
        }
        return group_anagram;
    }
};
