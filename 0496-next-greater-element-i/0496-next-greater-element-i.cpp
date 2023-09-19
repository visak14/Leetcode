class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int,int>umap;
        stack<int>st;
        for  (int i = nums2.size()-1; i>=0;i--){
            int curr_element = nums2[i];
                while(!st.empty() && st.top() <=curr_element){
                    st.pop();
                }
            int res = (st.empty()) ? -1 :st.top();
            umap.insert({curr_element,res});
            st.push(curr_element);
        }
        vector<int> ans;
           for(auto i:nums1){
               ans.push_back(umap[i]);
           }
       return ans;
    }
};