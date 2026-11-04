class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int del = 1;
        int maxlen = 0;
        int idx = -1;
        while(j < n){
            if(nums[j] == 1) j++;
            else{
                if(del > 0){
                    del--;
                    j++;
                }
                else{
                    idx = j - i -1;
                    maxlen = max(maxlen,idx);
                    while(nums[i] == 1) i++;
                    i++;
                    j++;
                }
            }
        }
        idx = j - i - 1;
        maxlen = max(maxlen,idx);
        return maxlen;
    }
};