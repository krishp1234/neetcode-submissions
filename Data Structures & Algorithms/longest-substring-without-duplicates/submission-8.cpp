class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int longest = 0;
        unordered_set<char> chars;

        while(right < s.size()){
            if(chars.contains(s[right])){
                while(chars.contains(s[right])){
                    chars.erase(s[left]);
                    ++left;
                }
            }
            chars.insert(s[right]);
            longest = max(longest, right - left + 1);
            ++right;
        }
        return longest;
    }
};
