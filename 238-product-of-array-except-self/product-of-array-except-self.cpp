class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        arr[0] = 1;
        for(int i=1; i<n; i++){
            arr[i] = nums[i-1] * arr[i-1];
        } 
        int suf = 1;
        for(int i=n-1; i>=0; i--){
            arr[i] *= suf;
            suf    *= nums[i];
        }
        return arr;
    }
};