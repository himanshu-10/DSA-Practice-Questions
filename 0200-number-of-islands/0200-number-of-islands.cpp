class Solution {
public:
    
    void dfs(int row, int col,vector<vector<int>>&vis,vector<vector<char>>& grid ){
        
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        
         vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
         for(auto it: directions){
             int nrow = row + it.first;
             int ncol = col + it.second;
             
             if(nrow >= 0 && nrow < n  && ncol >= 0 && ncol < m
               && grid[nrow][ncol] == '1'
               && !vis[nrow][ncol]
               ){
                 vis[nrow][ncol] = 1;
                 dfs(nrow,ncol,vis,grid);
             }
         }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        // visited matrix
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt = 0;
        for(int i = 0; i< n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    cnt++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        
        return cnt;
        
    }
};