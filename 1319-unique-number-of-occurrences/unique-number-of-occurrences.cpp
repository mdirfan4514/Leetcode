class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto ele : mp){
            s.insert(ele.second);
        }
        if(mp.size()!=s.size()) return false;
        return true;
    }
};