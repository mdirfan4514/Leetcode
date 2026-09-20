class Solution {
public:
    int rev(int val){
        int r = 0;
        while(val>0){
            r *= 10;
            r += (val%10);
            val /= 10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
            int revele = rev(nums[i]);
            s.insert(revele);
        }
        return s.size();
    }
};