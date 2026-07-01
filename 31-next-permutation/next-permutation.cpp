class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

       int cidx = -1;
        for(int i =n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
               cidx = i-1;
               break;
            }
        }

        if(cidx != -1){
        int swapidx = -1;
        for(int j=n-1; j> cidx ; j--){
            if(nums[j] > nums[cidx]){
                 swapidx = j;
                 break;

            }          
        }

        swap(nums[cidx],nums[swapidx]);
       }

       reverse(nums.begin()+ cidx+1 ,nums.end());
        
    }
};