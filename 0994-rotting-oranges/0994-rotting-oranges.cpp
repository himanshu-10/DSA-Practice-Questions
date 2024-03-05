class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        // make a visited array and mark as 0
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        // { { row,col },time }
        
        queue<pair<pair<int,int>,int>>q;
        // agar rotten hai to queue me daal rhe aur vis me mark kr rhe
        for(int i = 0; i< n; i++){
            for(int j = 0; j< m;j++){
                if(grid[i][j] == 2){
                   q.push({{i,j},0});
                    vis[i][j] = 2;
                }
            }
        }
        
        int maxtime = 0;
        
        vector<pair<int,int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            
            maxtime = max(maxtime,t);
            q.pop();
            
            for(auto it: dir){
                int nrow = r + it.first;
                int ncol = c + it.second;
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol <m && 
                    vis[nrow][ncol] != 2 && 
                    grid[nrow][ncol] == 1){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol] = 2;
                }
            }
        }
        
        // check every one is rotten or not
        for(int i  =0; i<n;i++){
            for(int j = 0; j< m;j++){
                if(vis[i][j] != 2 && grid[i][j] == 1){
                    return -1;
                }
            }
        }
        
        return maxtime;
    }
};