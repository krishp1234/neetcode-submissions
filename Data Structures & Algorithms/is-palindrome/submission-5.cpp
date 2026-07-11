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
        auto start = cleaned.begin();
        auto end = cleaned.end() - 1;

        while(start < end){

            if(*start != *end){
                return false;
            }
            ++start;
            --end;
        }
        return true;
    }
};
