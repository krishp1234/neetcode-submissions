class Solution {
public:

    string encode(vector<string>& strs) {
         string encode = "";
         for(auto i : strs){
            encode += to_string(i.size()) + '#' + i;
         }
         return encode;


    }

    vector<string> decode(string s) {
        //5#Hello5#World
        vector<string> decode; 
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                ++j;
            }
            int size = stoi(s.substr(i, j - i));
            decode.push_back(s.substr(j + 1, size));
            i = j + 1 + size;
        }
        return decode;
    }
};
