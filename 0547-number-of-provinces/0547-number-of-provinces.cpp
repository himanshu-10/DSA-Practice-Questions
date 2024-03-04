class Solution {
public:
    
    void dfs(int node, vector<int>&vis, vector<int>adj[]){
        vis[node] = 1;
        
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        
        //step 1:  matrix ---> array
        vector<int>adjL[n];
        for(int i = 0; i< n; i++){
            for(int j = 0; j< n;j++){
                if(isConnected[i][j] == 1 && i != j){
                    adjL[i].push_back(j);
                    adjL[j].push_back(i);
                }
            }
        }
        // step 2: make visited array
        // int vis[n] = {0};  -----> ERROR
        vector<int>vis(n,0);
        int cnt = 0;
        for(int i = 0; i< n;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,adjL);
            }
        }
        
        // return cnt;
        return  cnt;
        
    }
};