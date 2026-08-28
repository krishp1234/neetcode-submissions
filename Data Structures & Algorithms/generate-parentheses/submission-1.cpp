class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string stack;
        backtrack(n, result, stack, 0, 0);
        return result;
    }
    
    void backtrack(int n, vector<string> &result, string &stack, 
    int open, int close){
        if(n == close && close == open){
            result.push_back(stack);
            return;
        }
        if(open < n){
            stack.push_back('(');
            backtrack(n, result, stack, open + 1, close);
            stack.pop_back();
        }
        if(close < open){
            stack.push_back(')');
            backtrack(n, result, stack, open, close + 1);
            stack.pop_back();
        }   
    }
    
};
