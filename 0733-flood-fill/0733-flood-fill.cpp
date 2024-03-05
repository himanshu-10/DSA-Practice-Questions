class Solution {
public:
    
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,vector<pair<int,int>>dir,int row, int col, int initialCol, int color){
        
        ans[row][col] = color;
        
        int n = image.size();
        int m = image[0].size();
        
        for(auto it: dir){
            int nrow = row + it.first;
            int ncol = col + it.second;
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == initialCol && 
              ans[nrow][ncol] != color){
                dfs(image,ans,dir,nrow,ncol,initialCol,color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int initialCol = image[sr][sc];
        vector<vector<int>>ans = image;
        
        vector<pair<int,int>>dir = {{-1,0},{1,0},{0,-1},{0,1}};
        dfs(image,ans,dir,sr,sc,initialCol,color);
        return ans;
    }
};