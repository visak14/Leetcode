class Solution {
public:
   bool isvalid(vector<vector<int>>& image, int i, int j, int m, int n , int color){
       if (i>=0 && j>=0 && i<n && i<m &&  image[i][j] == color)
            return true;
         return false;
       
   }
    void floodFillRec(vector<vector<int>>& image, int i , int j, int m, int n ,int color, int newcolor){
        image[i][j] = newcolor;
        if(isvalid(image, i+1, j, m , n, color)){
            floodFillRec(image, i+1 ,j , m ,n ,color , newcolor);
        }
         if(isvalid(image, i-1, j, m , n, color)){
            floodFillRec(image, i-1 ,j , m ,n ,color , newcolor);
        }
         if(isvalid(image, i, j+1, m , n, color)){
            floodFillRec(image, i ,j+1 , m ,n ,color , newcolor);
        }
         if(isvalid(image, i, j-1, m , n, color)){
            floodFillRec(image, i ,j-1 , m ,n ,color , newcolor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor)
    {
        int n = image.size();
        int m = image[0].size();
        int color = image[sr][sc];
        
        if (color == newcolor)
            return image;
        floodFillRec(image, sr, sc, m, n , color, newcolor);
        
        return image;
       
    }
};