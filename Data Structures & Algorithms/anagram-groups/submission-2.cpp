class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(auto i : strs){
            string key = i;
            sort(key.begin(), key.end());
            map[key].push_back(i);
        }
        vector<vector<string>> groupAnagram;
        for(auto i : map){
            groupAnagram.push_back(i.second);
        }
        return groupAnagram;
    }
};
