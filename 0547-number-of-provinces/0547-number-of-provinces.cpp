class Solution {
    private:
    void dfs(int node, vector<int> adj[], vector<int>& visited){
        for (auto it: adj[node]){
            if(!visited[it]){
                visited[it] = 1;
                dfs(it, adj, visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> adj[v];
        for(int i =0; i<v; i++){
            for(int j = 0; j<v; j++){
                if(isConnected[i][j] == 1 && i !=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<int>visited(v,0);
        int count  = 0;
        for(int i = 0; i<v;i++){
            if  (!visited[i]){
                count ++; 
                dfs(i,adj, visited);
            }  
        }
        return count;
            
        
    }
};