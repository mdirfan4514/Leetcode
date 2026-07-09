class Solution {
public:
int mazePath(int sr, int sc, int er, int ec, vector<vector<int>>& dp){
    if(sr>er || sc>ec) return 0;
    if(sr == er && sc == ec) return 1;
    if(dp[sr][sc] != -1){
        return dp[sr][sc];
    }
    int rightways = mazePath(sr, sc+1,er,ec, dp);
    int downways = mazePath(sr+1, sc, er, ec, dp);
    return dp[sr][sc] = rightways + downways;
}
    int uniquePaths(int m, int n) {
        int sr = 0;
        int sc = 0;
        int er = m-1;
        int ec = n-1;
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return mazePath(sr, sc, er, ec, dp);
    }
};