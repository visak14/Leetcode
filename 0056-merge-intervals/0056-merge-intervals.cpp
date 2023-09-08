class Solution {
public:
    // static bool sortcol(const vector<int>& v1, const vector<int>& v2){
    //     return v1[0] < v2[0];
    // }
   
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        
        vector<vector< int>> ans;
        sort(intervals.begin(), intervals.end());
        
        ans.push_back(intervals[0]);
        
        int  j = 1;
        
        for(int i = 1; i<n; i++)
        {
            if(intervals[i][0] > ans[j-1][1])
            {
                ans.push_back(intervals[i]);
                j++;
            }
            else {
                ans[j-1][1] = max(ans[j-1][1], intervals[i][1]);
            }
        }
     
        return ans;
        
    }
};