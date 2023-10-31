class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int sum = 0;
        int ans = INT_MAX;
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = nums[0];
        right[n-1] = nums[n-1];

            for(int i=1; i<n; i++)
            {
                left[i] = min(left[i-1], nums[i]);
            }

            for(int k=n-2; k>=0; k--)
            {
                
                right[k] = min(right[k+1], nums[k]);
            }

        for(int j=1; j<n-1; j++)
        {
           if(nums[j] > left[j-1] && nums[j] > right[j+1] )
           {
               sum = left[j-1]+right[j+1]+nums[j];
               ans = min(ans, sum);
           }
            
        }
        if(ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};