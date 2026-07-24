class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int longest = 0;
        unordered_set<char> characters;
        while(right < s.size()){
            if(characters.contains(s[right])){
                //s="abcabcbb"
                while(characters.contains(s[right])){
                    characters.erase(s[left]);
                    ++left;
                }
            }
            characters.insert(s[right]);
            longest = max(longest, right - left + 1);
            ++right;
        }
        return longest;
    }
};
