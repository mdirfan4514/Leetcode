class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        int pre = 1;
        arr[0] = 1;
        for(int i=1; i<n; i++){
            pre *= nums[i-1];
             arr[i] = pre;
        } 
        
        vector<int> brr(n);
        int suf = 1;
        brr[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            suf *= nums[i+1];
            brr[i] = suf;
        }

        for(int i=0; i<n; i++){
            brr[i] *= arr[i];
        }
        return brr;
    }
};