class Solution {
public:
    int help(int i, int n , vector<int>&dp){
        if(i>=n-1) return 1;
        if(dp[i] != -1) return dp[i];
        int x = help(i+1, n, dp);
        int y = help(i+2, n , dp);
        return dp[i] = x+y;
    }
    int climbStairs(int n) {
        vector<int>dp(n, -1);
        return help(0,n,dp);
    }
};