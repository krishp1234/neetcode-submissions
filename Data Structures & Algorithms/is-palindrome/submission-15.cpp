class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(auto i : s){
            if(isalnum(i)){
                cleaned += tolower(i);
            }
        }
        if(cleaned.empty()){
            return true;
        }
        int start = 0;
        int end = cleaned.size() - 1;
        while(start < end){
            if(cleaned[start] != cleaned[end]){
                return false;
            }
            ++start;
            --end;
        }
        return true;
    }
};
