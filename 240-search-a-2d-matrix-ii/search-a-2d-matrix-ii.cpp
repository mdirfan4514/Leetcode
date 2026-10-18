class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool flag = false;
        int i = 0;
        int j = n-1;
        while(j >= 0 && i < m){
            if(matrix[i][j] == target){
                flag = true;
                break;
            }
            else if(matrix[i][j] > target){
                j--;
            }
            else i++;
        } 
        return flag;
    }
};