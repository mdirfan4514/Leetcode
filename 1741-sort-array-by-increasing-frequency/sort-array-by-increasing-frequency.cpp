class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> frequencySort(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int ele : arr){
            mp[ele]++;
        }
        priority_queue< pi, vector<pi>, greater<pi> > pq;
        for(auto x : mp){
            pq.push({x.second, -x.first});
        }
        vector<int> ans;
        while(pq.size()>0){
            int freq = pq.top().first;
            int ele = -pq.top().second;
            pq.pop();
            while(freq>0){
             ans.push_back(ele);
             freq--;
            }
        }
        return ans;
    }
};