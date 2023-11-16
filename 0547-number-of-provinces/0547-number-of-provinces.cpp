class Solution {
    private:
    void dfs(int node,vector<int>&visited, vector<int>adj[]){
        
        for (auto it: adj[node]){
            if (!visited[it]){
                visited[it] = 1;
                dfs(it, visited, adj);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int  n = isConnected.size();
        vector<int>adj[n];
        for ( int i = 0; i<n ; i++){
            for ( int j = 0; j<n ; j++){
                if (isConnected[i][j] == 1 && i !=j){
                    adj[i].push_back(j);
                    adj[i].push_back(i);
                }
            }
        }
        int count  = 0;
        vector<int>visited(n,0);
        for (int i = 0; i<n ; i++){
            if (!visited[i]){
                count ++;
                dfs(i, visited, adj);
            }
        }
                    return count;
    }
};