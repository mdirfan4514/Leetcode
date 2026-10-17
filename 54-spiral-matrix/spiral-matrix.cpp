class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        int minrow = 0;
        int maxrow = m-1;
        int mincol = 0;
        int maxcol = n-1;
        while(minrow <= maxrow && mincol <= maxcol){
            for(int j=mincol; j<=maxcol; j++){
                ans.push_back(matrix[minrow][j]);
            }
            minrow++;
            if(minrow > maxrow || mincol > maxcol) break;
            for(int i=minrow; i<=maxrow; i++){
                ans.push_back(matrix[i][maxcol]);
            }
            maxcol--;
            if(minrow > maxrow || mincol > maxcol) break;
            for(int k=maxcol; k>=mincol; k--){
                ans.push_back(matrix[maxrow][k]);
            }
            maxrow--;
            if(minrow > maxrow || mincol > maxcol) break;
            for(int l=maxrow; l>=minrow; l--){
                ans.push_back(matrix[l][mincol]);
            }
            mincol++;
        }
        return ans;
    }
};