class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       vector<int> ans;
       int remaining = 0;
       unordered_map<int,int> mp;
       for(int i=0; i<n; i++){
        remaining = target-nums[i];
        if(mp.find(remaining) != mp.end()){
            return{mp[remaining],i};
        }
        else{
           mp[nums[i]] = i;
          }
       }
       return {};
    }
};