class Solution {
public:
    bool isValid(string s) {
       unordered_map<char, char> chars = {{')', '('}, {']', '['}, {'}', '{'}};
       stack<char> stack1;

       for(auto i : s){
        if(chars.contains(i) && stack1.empty()){
            return false;
        }
        else if(chars.contains(i) && stack1.top() == chars[i]){
            stack1.pop();
        }
        else{
            stack1.push(i);
        }
       } 
       return stack1.empty();
    }
};
