class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26, 0);
        

        for(auto i : s){
            if(i == ' ') continue;
            int index = i - 'a';
            ++v1[index];
        }
        for(auto i : t){
            if(i == ' ') continue;
            int index = i - 'a';
            --v1[index];
        }

        for(auto i : v1){
            if(i != 0) return false;

        }
        return true;


    }
};
