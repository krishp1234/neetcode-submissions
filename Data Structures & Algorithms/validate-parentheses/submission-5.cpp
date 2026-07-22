class Solution {
public:
    bool isValid(string s) {
        //([{}])
        // [(])
        unordered_map<char, char> closing = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> stack1;
        for(auto i : s){
            if(closing.contains(i)){
                if(!stack1.empty() && stack1.top() == closing[i]){
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
