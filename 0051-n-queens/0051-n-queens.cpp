class Solution {
public:
    void storeAns(vector<vector<int>> &board, vector<vector<string>> &ans)
    {
        int N = board.size();
        vector<string> curr_ans;
        for (int i = 0; i<N; i++)
        {
            string s ="";
            for (int j = 0 ; j< N; j++)
            {
                if  (board[i][j])
                    s +="Q";
                else
                    s +=".";
            }
            curr_ans.push_back(s);
        }
       ans.push_back(curr_ans);
    }
    
    bool isSafe(vector<vector<int>>&board, int row, int col){
        int i , j, N=board.size();
        for ( int i = 0 ; i<col; i++)
            if (board[row][i])
                return false;
        
        for (i = row, j = col ; i>=0 && j>= 0; i--, j--)
            if(board[i][j])
                return false;
        
        for ( i= row, j= col;  j>=0 && i <N; i++, j--)
            if(board[i][j])
                return false;
            return true;
        
    }
    void solveNQUtil(vector<vector<int>>&board,  int col, vector<vector<string>> &ans)
    {
        int N = board.size();
        if (col >= N)
        storeAns(board,ans);
        for(int i = 0 ; i<N; i++)
        {
            if (isSafe(board, i, col)){
                board[i][col] = 1;
                solveNQUtil(board, col+1, ans);
                board[i][col] = 0;
            }
        }
    }
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>>board(n,  vector<int>(n,0));
        vector<vector<string>> ans;
        solveNQUtil(board, 0, ans);
        return ans;
    }
};