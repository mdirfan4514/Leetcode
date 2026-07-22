class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int ans;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            if(mp[nums[i]] == 1){
                ans = nums[i];
            } 
        }
        return ans;
    }
};