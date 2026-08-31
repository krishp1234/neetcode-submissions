class Solution {
public:
    unordered_map<char, string> numbers = {{'2', "abc"}, 
    {'3', "def"}, 
    {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}
    , {'9', "wxyz"}};

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        string current;
        vector<string> final;
        backtrack(digits, 0, current, final);
        return final;
    }

    void backtrack(string digits, int i, string &current, 
    vector<string>& final){
        if(current.size() == digits.size()){
            final.push_back(current);
            return;
        }

        for(auto c : numbers[digits[i]]){
            current.push_back(c);
            backtrack(digits, i + 1, current, final);
            current.pop_back();
        }
    }

};
