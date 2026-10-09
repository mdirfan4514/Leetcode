class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        int i = 0;
        int j = n-1;
        int posq = n-1;
        while (i <= j){
            int l = nums[i] * nums[i];
            int r = nums[j] * nums[j];
            if(l > r){
                v[posq] = l;
                i++;
            }
            else{
                v[posq] = r;
                j--;
            }
            posq--;
        }
        return v;
    }
};