class Solution {
public:
    static bool comp(int a, int b){
        return a>b;
    }
  
    int minProcessingTime(vector<int>& p, vector<int>& t) {
       sort(p.begin(),p.end());
       sort(t.begin(),t.end(),comp);
        int i = 0, k = 0, ans = 0;
        while(i<t.size()){
            ans  = max(p[k] + t[i], ans);
            i +=4;
            k++;
        }
        return ans;     
    }
};