class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size(),s1 = 0,s2 = 0;
        vector<int> v(n,0);
        for(auto &i: nums){
            s2 += i;
        }
        for(int i = 0; i < n; i++){
            v[i] = s2-nums[i]*(n-i)-(s1-nums[i]*i);
            s2 -= nums[i];
            s1 += nums[i];
        }
        return v;
    }
};