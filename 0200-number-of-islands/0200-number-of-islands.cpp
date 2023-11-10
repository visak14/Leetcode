class Solution {
public:
    bool isvalid(int n , int m, int i, int j, vector<vector<char>>& grid ){
        if (i>=0 && j>=0 && i<n && j <m && grid[i][j] == '1' )
            return true;
        return false;
    }
    
    void numIslandsRec(int n , int m, int i , int j, vector<vector<char>>& grid){
        grid[i][j] = '0';
        if (isvalid(n, m , i+1, j, grid)){
            numIslandsRec(n,m, i+1,j, grid);
        }
        if (isvalid(n, m , i-1, j, grid)){
            numIslandsRec(n,m, i-1,j, grid);
        }
        if (isvalid(n, m , i, j+1, grid)){
            numIslandsRec(n,m, i, j+1, grid);
        }
        if (isvalid(n, m , i, j-1, grid)){
            numIslandsRec(n,m, i,j-1, grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
       int n = grid.size();
        int m = grid[0].size();
        int ans =0;
        for (int i = 0; i< n ; i++){
            for (int j= 0; j< m ; j++){
                if (grid[i][j] =='1'){
                    ans ++;
                    numIslandsRec( n ,m,i,j ,grid);
                }
            }
        }
        return ans;
        }
    
};