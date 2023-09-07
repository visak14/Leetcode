class Solution {
public:
   
        vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<vector<int>> a;

        while (n--) {
            vector<int> t(8);
            t[0] = t[7] = 0;
            for(int i = 1 ; i < 7 ; i++){
            if( cells[i-1]  == cells[i+1])
            
                 t[i] = 1;
             else 
                t[i] = 0;
            }
            if(a.size() > 0 && t==a[0])
            return a[n%a.size()];
            else
            a.push_back(t);
            cells = t ;
        

        }
        return cells; 
    }
};