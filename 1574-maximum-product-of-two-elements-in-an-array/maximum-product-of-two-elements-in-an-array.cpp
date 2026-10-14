class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int fmax = nums[0];
        int smax = INT_MIN;
        for(int i = 1; i<n; i++){
            if(nums[i] > fmax){
                smax = fmax;
                fmax = nums[i];
            }
            else{
                if(nums[i] > smax && nums[i] <= fmax) smax = nums[i];
            }
        }
        return (fmax-1) * (smax-1);
    }
};