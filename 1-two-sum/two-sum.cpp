class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n = nums.size();
         unordered_map<int, int> mp;
         int remaining = 0;
         for(int i=0; i<n; i++){
            remaining = target - nums[i];
            if(mp.find(remaining) != mp.end()){
                return {mp[remaining], i};
            }
            mp[nums[i]] = i;
         }
           return{};
    }
};