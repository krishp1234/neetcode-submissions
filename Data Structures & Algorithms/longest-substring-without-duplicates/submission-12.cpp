class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_set<char> substring;
        int longest = 0;

        while(right < s.size()){
            if(substring.contains(s[right])){
                while(substring.contains(s[right])){
                    substring.erase(s[left]);
                    ++left;
                }
            }
            substring.insert(s[right]);
            ++right;
            longest = max(longest, right - left);

        }
        return longest;
    }
};
