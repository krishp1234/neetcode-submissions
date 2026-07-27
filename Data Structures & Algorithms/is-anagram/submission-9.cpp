class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> f1(26,0);
        vector<int> f2(26,0); 

        for(int i = 0; i < s.size(); ++i){
            int alpha_index = s[i] - 'a';
            ++f1[alpha_index];
        }
        for(int i = 0; i < t.size(); ++i){
            int alpha_index = t[i] - 'a';
            ++f2[alpha_index];
        }
        return f1 == f2;
    }
};
