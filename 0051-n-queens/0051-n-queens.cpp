class Solution {
public:
    
    bool isSafe(int row, int col, int n, vector<string>ds){
        
        int rowdup = row;
        int coldup = col;
        
        // upper diagonal direction \
        
        while(row >= 0 && col >= 0){
            if(ds[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        
        // left side <-
        
        row = rowdup;
        col = coldup;
        while(col >= 0){
            if(ds[row][col] == 'Q')
                return false;
            col--;
        }
        
        // lower diagonal direction /
         row = rowdup;
        col = coldup;
        while(row <n && col >= 0){
            if(ds[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        
        return true;
    }
    void f(int col, int n,vector<string>&ds, vector<vector<string>>&ans){
        
        // base case
        if(col == n){
            ans.push_back(ds);
            return;
        }
        
        for(int row =0;row<n;row++){
            
            //check for weather we place the queen or not
            if(isSafe(row,col,n,ds)){
                // place the queen
                ds[row][col] = 'Q';
                // recursive call
                f(col+1,n,ds,ans);
                // backtrack
                ds[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;
        vector<string>ds(n);
        
        // take string s of size n and initialize with 0
        string s(n,'.');
        for(int i = 0;i<n;i++){
            ds[i] = s;
        }
        
        f(0,n,ds,ans);
        return ans;
        
    }
};