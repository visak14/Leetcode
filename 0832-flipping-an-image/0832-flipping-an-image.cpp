class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
           int m = image[0].size();
        for (int i = 0; i<n ; i++)
            {
            vector<int> x = image[i];
            reverse(x.begin(),x.end());
            image[i]  = x;
        }
            for (int i = 0; i<n ; i++)
            {
                for ( int j  = 0 ; j< image[i].size(); j++ )
                    image[i][j] ^=1;
            }
            return image;
    }
};