class Solution {
    
    int visited[];
    boolean isBipartite= true;
    void dfs(int src,int[][] graph, int color ){
        visited[src] = color;
        for (Integer neighbour : graph[src]){
            if(visited[neighbour] == -1){
                dfs(neighbour , graph , 1-color);
            }
            else if (visited[neighbour] == color){
                isBipartite = false;
                
            }
        }
    }
    public boolean isBipartite(int[][] graph) {
         int n  = graph.length;
        visited = new int [n];
        for(int i  = 0 ; i<n ; i++){
            visited[i] = -1;
        }
        
        for(int i = 0; i<n ; i++){
            if(visited[i] == -1){
                dfs(i, graph, -1);
            }
        }
        return isBipartite;
    }
    
}