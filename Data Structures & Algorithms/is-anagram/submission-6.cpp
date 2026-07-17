class Solution {
   public:
    bool isAnagram(string s, string t) {
        vector<int> frequency1(26, 0);
        vector<int> frequency2(26, 0);
        for(auto i : s){
            if(isspace(i)){
                continue;
            }
            int alpha_index = i - 'a';
            ++frequency1[alpha_index];
        }
        for(auto i : t){
            if(isspace(i)){
                continue;
            }
            int alpha_index = i - 'a';
            ++frequency2[alpha_index];
        }
        return frequency1 == frequency2;
    }
};
