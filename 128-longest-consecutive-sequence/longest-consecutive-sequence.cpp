class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int globalcount = 0;
        if(n==0) return 0;
        unordered_set<int> s;
        for(int i=0; i<n; i++){
            s.insert(nums[i]);
        }
        for(int num : s){
            if(s.find(num-1) != s.end()) continue;
            else{
                int count = 0;
                int current = num;
                while(s.find(current) != s.end()){
                    count++;
                    current++;
                }
                globalcount = max(globalcount, count);
            }
        }
            return globalcount;
        
    }
};