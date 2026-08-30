class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        set<pair<int, int>> visited;
        for(int i = 0; i < board.size(); ++i){
            for(int j = 0; j < board[0].size(); ++j){
                if(backtrack(board, word, 0, i, j, visited)){
                    return true;
                }
            }
        }
        return false;
    }
    bool backtrack(vector<vector<char>>& board, string word,
    int i, int row, int col, set<pair<int, int>>& visited){
        if(i >= word.size()){
            return true;
        }
        if(min(row, col) < 0 || row == board.size() || 
        col == board[0].size() || word[i] != board[row][col] 
        || visited.contains({row, col})){
            return false;
        }

        visited.insert({row, col});
        bool result = backtrack(board, word, i + 1, row + 1,
        col, visited) || backtrack(board, word, i + 1, row - 1,
        col, visited) || backtrack(board, word, i + 1, row,
        col + 1, visited) || backtrack(board, word, i + 1,
        row, col - 1, visited);

        visited.erase({row, col});
        return result;
    }
};
