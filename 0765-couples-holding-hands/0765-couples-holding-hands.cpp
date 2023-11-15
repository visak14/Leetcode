class Solution {
public:
    void dfs(int zoneId,vector<int>& visited, unordered_map<int, vector<int>>&m){
        visited[zoneId] =1;
        for(int neighbour : m[zoneId]){
            if(visited[neighbour] == 0){
              dfs(neighbour,visited,m)  ;
            }
        }
    }
    int minSwapsCouples(vector<int>& row) {
       int coupleCount = row.size() / 2;
        vector<int> zoneNumber(2*coupleCount);
        for(int i  = 0; i<row.size(); i++){
            int zone  = i/2;
            zoneNumber[row[i]] = zone;
        }
        
        unordered_map<int, vector<int>> m;
        for(int i = 0; i<row.size(); i++){
            int person = row[i];
            int partner;
            if(person%2 == 0) partner = person + 1;
            else partner = person -1;
            int personZone  = zoneNumber[person];
            int partnerZone = zoneNumber[partner];
            m[personZone].push_back(partnerZone);
        }
        
        int groupCount = 0;
        vector<int> visited(coupleCount,0);
        for(int i = 0; i<coupleCount; i++){
            if(visited[i] == 0){
                groupCount ++;
                dfs(i,visited,m);
            }
        }
        return coupleCount-groupCount;
    }
};