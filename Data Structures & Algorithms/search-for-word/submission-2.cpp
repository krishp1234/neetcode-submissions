class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        set<pair<int, int>> visited;
        for(auto row = 0; row < board.size(); ++row){
            for(auto col = 0; col < board[0].size(); ++ col){
                if(backtrack(board, word, 0, row, col, visited)){
                    return true;
                }
            }
        }
        return false;
    }
    bool backtrack(vector<vector<char>>& board, string word,
    int i, int r, int c, set<pair<int, int>>& visited){
        if(i == word.size()){
            return true;
        }
        if(min(r, c) < 0 || r == board.size() || 
        c == board[0].size() || board[r][c] != word[i]
        || visited.contains({r, c})){
            return false;
        }
        visited.insert({r,c});
        bool result = backtrack(board, word, i + 1, r + 1, c,
        visited) || backtrack(board, word, i + 1, r - 1, c,
        visited) || backtrack(board, word, i + 1, r, c + 1,
        visited) || backtrack(board, word, i + 1, r, c - 1, 
        visited);
        
        visited.erase({r, c});
        return result;


    }
};
