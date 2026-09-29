class Solution {
public:
    int countPaths(vector<vector<int>>& grid) {
        set<pair<int, int>> visited;
        return dfs(grid, 0, 0, visited);
    }
    int dfs(vector<vector<int>>& grid, int row, int col,
    set<pair<int, int>>& visited){
        if(min(row, col) < 0 || row == grid.size() || 
        col == grid[0].size() || visited.contains({row, col})
        || grid[row][col] == 1){
            return 0;
        }
        if(row == grid.size() - 1 && col == grid[0].size() - 1){
            return 1;
        }
        visited.insert({row, col});
        int count = 0;
        count += dfs(grid, row + 1, col, visited);
        count += dfs(grid, row - 1, col, visited);
        count += dfs(grid, row, col + 1, visited);
        count += dfs(grid, row, col - 1, visited);

        visited.erase({row, col});
        return count;
    }
};
