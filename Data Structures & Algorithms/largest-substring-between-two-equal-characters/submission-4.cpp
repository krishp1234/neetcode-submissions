class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> letter;
        int answer = -1;
        
        for(int i = 0; i < s.size(); ++i){
            if(letter.contains(s[i])){
                answer = max(answer, i - letter[s[i]] - 1);
            }
            letter.insert({s[i], i});
        }
        return answer;
    }
};