class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> c;
        int a = -1;

        for(int i = 0; i < s.size(); ++i){
            if(c.contains(s[i])){
                a = max(a, i - c[s[i]] - 1);
            }
            c.insert({s[i], i});
        }
        return a;
    }
};