class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> frequency1(26,0);
        for(int i = 0; i < s.size(); ++i){
            int alpha_index = s[i] - 'a';
            ++frequency1[alpha_index];
        }
        for(int i = 0; i < t.size(); ++i){
            int alpha_index = t[i] - 'a';
            --frequency1[alpha_index];
        }
        for(int i = 0; i < 26; ++i){
            if(frequency1[i] != 0){
                return false;
            }
        }
        return true;

        
    }
};
