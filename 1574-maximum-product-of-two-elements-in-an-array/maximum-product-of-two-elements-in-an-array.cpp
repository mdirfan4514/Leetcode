class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int fmax = nums[0];
        int smax = 0;
        for(int i=1; i<n; i++){
            if(fmax <= nums[i]){
                smax = fmax;
                fmax = nums[i];
            }
            else{
                if(smax < nums[i]) smax = nums[i];
            }
        }
        return (fmax-1) * (smax-1);
    }
};