class Solution {
public:
    
    void dfs(int row,int col, vector<vector<int>>&vis,vector<vector<char>>& board,
                vector<pair<int,int>>dir){
        
        int n = board.size();
        int m = board[0].size();
        vis[row][col] = 1;
        //check for right,left,top, bottom
        
        for(auto it : dir){
            int nrow = row + it.first;
            int ncol = col + it.second;
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
              !vis[nrow][ncol] && board[nrow][ncol] == 'O'){
                dfs(nrow,ncol,vis,board,dir);
            }
        }
        
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        vector<pair<int,int>>dir = {{-1,0},{0,1},{1,0},{0,-1}};
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        // traverse the boundary 
        // make dfs if boundary have 0
        
        // for 1st row and last row
        for(int j =0; j< m;j++){
            // first row
            if(!vis[0][j] && board[0][j] == 'O'){
                dfs(0,j,vis,board,dir);
            }
            //last row
            if(!vis[n-1][j] && board[n-1][j] == 'O'){
                dfs(n-1,j,vis,board,dir);
            }
        }
        
        // for 1st col and last col
        for(int i =0; i< n;i++){
            // first col
            if(!vis[i][0] && board[i][0] == 'O'){
                dfs(i,0,vis,board,dir);
            }
            // last col
            if(!vis[i][m-1] && board[i][m-1] == 'O'){
                dfs(i,m-1,vis,board,dir);
            }
        }
        
        for(int i = 0; i< n;i++){
            for(int j = 0; j< m;j++){
                if(!vis[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
        
        // return board;
        
    }
};