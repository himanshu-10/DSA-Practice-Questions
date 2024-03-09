class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        // traverse bounday 
        // if 1 appear --> push into queue 
        // maked 1 in vis matric
        
        // row
        for(int j = 0;j<m;j++){
            // first row
            if(grid[0][j] == 1){
                q.push({0,j});
                vis[0][j] = 1;
            }
            
            // last row
            if(grid[n-1][j] == 1){
                q.push({n-1,j});
                vis[n-1][j] = 1;
            }
        }
        
        // col
        for(int i = 0; i< n;i++){
            //first col
            if(grid[i][0] == 1){
                q.push({i,0});
                vis[i][0] = 1;
            }
            
            // last col
            if(grid[i][m-1] == 1){
                q.push({i,m-1});
                vis[i][m-1] = 1;
            }
        }
        
        // direction 
        vector<pair<int,int>>dir = { {-1,0},{0,1},{1,0},{0,-1}};
        while(!q.empty()){
            
            int r = q.front().first;
            int c = q.front().second;
            
            q.pop();
            
            for(auto it : dir){
                int nrow = it.first + r;
                int ncol = it.second + c;
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                  !vis[nrow][ncol] && grid[nrow][ncol] == 1 ){
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
        
        int cnt = 0;
        for(int i = 0; i< n;i++){
            for(int j = 0; j< m;j++){
                if(grid[i][j] == 1 && vis[i][j] == 0){
                    cnt++;
                }
            }
        }
        
        return cnt;
        
        
    }
};