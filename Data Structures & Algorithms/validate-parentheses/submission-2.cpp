class Solution {
public:
    bool isValid(string s) {
        stack<char> stack1;
        unordered_map<char, char> valid = {{')', '('}, {']', '['}, {'}', '{'}};
        for(auto i : s){
            if(valid.contains(i)){
                if(!stack1.empty() && stack1.top() == valid[i]){
                    stack1.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack1.push(i);
            }
        }
        return stack1.empty();
    }
};
