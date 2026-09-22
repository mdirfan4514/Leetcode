class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n = str.size();
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<n; i++){
            string lexo = str[i];
            sort(lexo.begin(),lexo.end());
            if(mp.find(lexo)==mp.end()){
                vector<string> v;
                v.push_back(str[i]);
                mp[lexo] = v;
            }
            else mp[lexo].push_back(str[i]);
        }
        for(auto ele : mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};