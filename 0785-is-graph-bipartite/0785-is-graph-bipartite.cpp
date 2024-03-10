class Solution {
public:
    
    bool bfs(vector<vector<int>>graph,int start, vector<int>&color){
        queue<int>q;
        q.push(start);
        
        color[start] = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it : graph[node]){
                // agar adj node color nhi hai to 
                // opp. colr se colr krenge , node ke opp. colr
                if(color[it] == -1){
                    color[it] = !color[node];
                    q.push(it);
                }
                
                // phle se colr hai adj node o bhi same colr of node ---> false
                else if( color[it] == color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        
        if(graph.empty())
            return false;
        
        vector<int>color(graph.size(),-1);
        for(int i = 0; i< graph.size();i++){
            if(color[i] == -1){
               if(! bfs(graph,i,color) ) 
                   return false;
            }
        }
        
        return true;
        

        
    }
};