class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto c : mp){
          if(c.second != 3){
             return c.first; 
          }
        }
        return 0;
    }
};