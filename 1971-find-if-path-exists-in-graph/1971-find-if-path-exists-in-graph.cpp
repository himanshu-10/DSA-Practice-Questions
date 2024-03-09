class Solution {
public:
    
    bool dfs(int src, int dest, vector<int> &vis,vector<vector<int>>& adj ){
        
        if(src == dest) 
            return true;
        
        if (vis[src])
            return false;
        
        vis[src] = true;
        
        for(auto it : adj[src]){
            if(!vis[it]){
               
                if(dfs(it,dest,vis,adj)){
                    return true;
                }
            }
        }
        return false;
        
        
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        // source se dfs lgayenge --> if dest reached return true else return false
        // adj list
         vector<vector<int>> adj(n);
        
        // make adj list
        for(int i = 0; i<edges.size();i++){
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        // visited array
        vector<int>vis(n,0);
        
        return dfs(source,destination,vis,adj);
        
        
        
        
    }
};