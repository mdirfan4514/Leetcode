class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    int idx = 0;
    int lo = 0;
    int hi = n-1;
    int mid = lo + (hi-lo)/2;
    while(lo<=hi){
        if(nums[mid]==target) {
            idx = mid;
            return idx;
        }
        else if(nums[mid]<target){
            lo = mid+1;
            mid = lo + (hi-lo)/2;
        }
        else{
            hi = mid-1;
            mid = lo + (hi-lo)/2;
        }
      }
        return -1;
    }
};