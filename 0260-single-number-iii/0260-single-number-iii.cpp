class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
         unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto c : mp){
          if(c.second != 2){
             ans.push_back(c.first); 
          }
        }
        return ans;
    }
};