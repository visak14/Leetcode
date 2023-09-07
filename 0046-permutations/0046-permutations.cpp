class Solution {
public:
    void getAllPermutation(vector<int>&nums, int start, vector<int> curr_permutation, vector<vector<int>>&ans){
        if(start == nums.size()){
            ans.push_back(curr_permutation);
    }
      for(int i = start; i<nums.size(); i++){
        swap(nums[start], nums[i]);
        curr_permutation.push_back(nums[start]);
        getAllPermutation(nums, start+1, curr_permutation,ans);
        swap(nums[start], nums[i]);
        curr_permutation.pop_back();
    }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ans;
        vector<int> curr_permutation;
        getAllPermutation(nums, 0, curr_permutation, ans);
        return ans;
    }
};