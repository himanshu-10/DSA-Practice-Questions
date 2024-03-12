class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        
        // prerequeist
        // --> adjacency matrix ✅
        // --> indegree array ✅
        // --> queue ✅
        // --> ans vector ✅
        
        // adj matrix;
        unordered_map<int,vector<int>>adj;
        for(int i = 0; i < prerequisites.size();i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            adj[u].push_back(v);
        }
        
        // inorder degree
    
        vector<int>indegree(n,0);
        for(int i = 0; i< n;i++ ){
            for(auto it : adj[i]){
                indegree[it]++;
            }
        }
        
        vector<int>ans;
        queue<int>q;
        
        // insert all node with indegree 0
        for(int i = 0; i<n;i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it: adj[node]){
                indegree[it]--;
                
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        
        if(ans.size() == n)
            return ans;
        
        return {};
        
    }
};