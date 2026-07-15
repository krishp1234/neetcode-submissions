class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_message;
        for(auto i : strs){
            encoded_message.append(to_string(i.size()));
            encoded_message.push_back('#');
            encoded_message.append(i);
        }
        return encoded_message;
    }
    //4#neet5#co#de
    vector<string> decode(string s) {
        vector<string> decoded_message;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                ++j;
            }
            int length = stoi(s.substr(i, j - i));
            decoded_message.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
        }
        return decoded_message;
    }
};
