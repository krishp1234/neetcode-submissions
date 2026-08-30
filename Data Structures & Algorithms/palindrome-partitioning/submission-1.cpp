class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string> current;
        vector<vector<string>> final;
        backtrack(s, 0, current, final);
        return final;
    }
    void backtrack(string s, int i, vector<string>& current,
    vector<vector<string>>& final){
        if(i == s.size()){
            final.push_back(current);
            return;
        }
        for(int j = i; j < s.size(); ++j){
            if(palindrome(i, j, s)){
                current.push_back(s.substr(i, j - i + 1));
                backtrack(s, j + 1, current, final);
                current.pop_back();
            }
        }

        
    }
    bool palindrome(int i, int j, string s){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }
};
