class Solution {
public:
    int mazePath(int sr, int sc, int er, int ec, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp){
        if(sr>er || sc>ec) return 0;
        if(obstacleGrid[sr][sc] == 1) return 0;
        if(sr == er && sc == ec) return 1;
        if(dp[sr][sc] != -1){
            return dp[sr][sc];
        }
        int rightways = mazePath(sr, sc+1, er, ec, obstacleGrid, dp);
        int downways = mazePath(sr+1, sc, er, ec, obstacleGrid, dp);
        return dp[sr][sc] = rightways + downways;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int sr = 0;
        int sc = 0;
        int er = obstacleGrid.size()-1;
        int ec = obstacleGrid[0].size()-1;
        vector<vector<int>> dp(er+1, vector<int> (ec+1, -1));
        return mazePath(sr, sc, er, ec, obstacleGrid, dp);
    }
};