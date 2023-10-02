class Solution {
public:
    int ans = 0;
    void help(vector<int>& nums, int i , int xorr){
        if (i >= nums.size())
        {
             ans +=xorr;
              return;
        }
        help(nums, i+1,   xorr^nums[i]);
        help(nums,i+1, xorr);
    }
    int subsetXORSum(vector<int>& nums) {
       help(nums,0,0) ;
        return ans;
    }
};