class Solution {
    private:
    void dfs(int node,vector<int>& visited,vector<int> adjList[])
    {
       
        for(auto it: adjList[node])
        {
            if(!visited[it])
            {
                visited[it]=1;
                dfs(it,visited,adjList);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        
        vector<int> adjList[v];
		
       
		
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(isConnected[i][j]==1 and i!=j)
                {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        vector<int> visited(v,0);
        int count=0;
        for(int i=0;i<v;i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(i,visited,adjList);
            }
        }
        
        return count;
    }
};