class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int longest = 0;
        int maxf = 0;
        unordered_map<char, int> freq;

        while(right < s.size()){
            ++freq[s[right]];
            maxf = max(maxf, freq[s[right]]);
            ++right;
            while((right - left) - maxf > k){
                --freq[s[left]];
                ++left;
            }
            longest = max(longest, right - left);
        }
        return longest;
    }
};
