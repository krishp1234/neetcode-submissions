class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> frequency1(26,0);
        vector<int> frequency2(26,0);

        for(int i = 0; i < s.size(); ++i){
            int alpha_index = s[i] - 'a';
            ++frequency1[alpha_index];
        }
        for(int i = 0; i < t.size(); ++ i){
            int alpha_index = t[i] - 'a';
            ++frequency2[alpha_index];
        }

        if(frequency1 != frequency2){
            return false; 
        }
        return true;

        
    }
};
