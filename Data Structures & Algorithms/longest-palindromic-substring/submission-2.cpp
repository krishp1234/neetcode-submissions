class Solution {
public:
    string longestPalindrome(string s) {
        string longest;
        for(int i = 0; i < s.size(); ++i){
            for(int j = i; j < s.size(); ++j){
                int left = i;
                int right = j;
                if(palindrome(left, right, s)){
                    int length = right - left + 1;
                    if(length > longest.size()){
                        longest = s.substr(left, length);
                    }
                }
            }
        }
        return longest;
    }

    bool palindrome(int left, int right, string s){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
