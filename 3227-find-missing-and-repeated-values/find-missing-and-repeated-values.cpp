class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long N = n*n;

        long long gridsum = 0;
        long long gridsqsum = 0;

        for(int i = 0;i<n; i++){
            for(int j= 0; j<n; j++){
                gridsum += grid[i][j];
                gridsqsum += grid[i][j] * grid[i][j];
            }
        }
        // act = actual
        long long actsum = (N*(N+1)/2);
        long long actsqsum = (N*(N+1)*(2*N+1)/6);

        int sqdiff = gridsqsum - actsqsum;
        int sdiff = gridsum - actsum;

        int a = ((sqdiff/sdiff) + sdiff)/2;
        int b = ((sqdiff/sdiff) - sdiff)/2;
        
        return {a,b};
    }
};
