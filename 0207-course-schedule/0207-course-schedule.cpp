class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
          
        // vector<int> adj[numCourses];
        unordered_map<int,vector<int>>adj;
        for(int i =0; i< prerequisites.size();i++){
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            adj[v].push_back(u);
        }
        
        // topo sort logic ---> BFS
        
        // indegree
        // vector<int> indegree(numCourses, 0);
        // for(auto& it : adj) {
        //     for(auto neighbor : it.second) {
        //         indegree[neighbor]++;
        //     }
        // }
        
         vector<int>indegree(numCourses,0);
        for(int i = 0; i< numCourses;i++ ){
            for(auto it : adj[i]){
                indegree[it]++;
            }
        }
        
        queue<int>q;
        for(int i = 0 ; i<  numCourses;i++){
            if(indegree[i] == 0)
                q.push(i);
        }
       vector<int>ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        
        return ans.size() == numCourses;
    }
};