class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>start, end;
        for (auto& i : flowers)
          start.push_back(i[0]), end.push_back(i[1]);
          sort(start.begin(),start.end());
          sort(end.begin(), end.end());
          vector<int>ans;
        for(int t: people)
        { int first = upper_bound(start.begin(), start.end(),t)-start.begin();
          int last = lower_bound(end.begin(), end.end(), t)- end.begin();
          ans.push_back(first-last);
        }
        return ans;
    }
};