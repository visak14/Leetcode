class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int res1 = 0, res2 = 0;
        int m = nums1.size();
        int n = nums2.size();
        for(int i = 0 ;  i< m; i++){
            for( int j = 0 ; j < n; j++){
                if(nums1[i] == nums2[j]){
                    res1++;
                    break;
                }
            }
        }
        for(int i = 0 ;  i< n; i++){
            for( int j = 0 ; j < m; j++){
                if(nums2[i] == nums1[j]){
                    res2++;
                    break;
                }
            }
        }
        ans.push_back(res1);
        ans.push_back(res2);
        return ans;
    }
};