class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(int i = 0; i < strs.size(); ++i){
            encoded_string += to_string(strs[i].size()) + '#' + strs[i];
        }
        return encoded_string;
    }
    //4#neetcode5#code
    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                ++j;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            decoded_string.push_back(s.substr(i, length));
            i = j;
        }
        return decoded_string;
    }
};
