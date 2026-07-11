class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(const auto &i : strs){
            string sorted = i;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(i);
        }

        vector<vector<string>> group_anagrams;
        for(const auto &i : map){
            group_anagrams.push_back(i.second);
        }
        return group_anagrams;
    }
};
