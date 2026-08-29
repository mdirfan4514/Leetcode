class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        mp[nums[0]] = 0;
        for(int i=1; i<n; i++){
            if(mp.find(nums[i]) != mp.end()){
                return true;
            }    
            mp[nums[i]] = i;
        }
        return false;
    }
};