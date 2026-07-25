class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int longest = 0;
        unordered_map<char, int> frequency;
        int maxf = 0;

        while(right < s.size()){
            ++frequency[s[right]];
            maxf = max(maxf, frequency[s[right]]);
            while((right - left + 1) - maxf > k){
                --frequency[s[left]];
                ++left;
            }
            longest = max(longest, right - left + 1);
            ++right;
        }
        return longest;
        
    }
};
