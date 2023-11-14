class Solution {
public:
    
    bool dfsRec(int s , vector<bool>&visited, vector<bool>&notVisited, vector<int>adj[]  ){
        visited[s] = true;
        notVisited[s]= true;
        
        vector<int> data = adj[s];
        for (auto x: data){
            if (!visited[x]){
                if(dfsRec(x,visited,notVisited,adj))
                {
                    return true;
                }
                
            }
            else if (visited[x] && notVisited[x]){
                return true;
            }
        }
            notVisited[s]  = false;
            return false;
        
    }
    
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prereq) {
        int n = numCourses;
        vector<bool>visited(n, false), notVisited(n, false);
        vector<int>adj[n];
        for (auto x: prereq){
           vector<int> data = x;
            int a = data[0];
            int b = data[1];
            adj[a].push_back(b);
        }
        for (int i = 0; i<n; i++){
            if (!visited[i]){
                if (dfsRec(i, visited, notVisited, adj)){
                    return false;
                }
            }
        }
        return true;
    }
};