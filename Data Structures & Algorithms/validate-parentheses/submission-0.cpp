class Solution {
public:
    bool isValid(string s) {
      stack<char> valid;
      unordered_map<char, char> syntax= {{')', '('}, {']', '['}, {'}', '{'}};
      for(auto i : s){
        if(syntax.contains(i)){
            if(!valid.empty() && valid.top() == syntax[i]){
                valid.pop();
            }
            else{
                return false;
            }
        }
        else{
            valid.push(i);
        }
      }
      return valid.empty();
      
    }
};
