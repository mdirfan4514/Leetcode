class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int currLoss = 0;
        for(int i=0; i<minutes; i++){
            currLoss += (customers[i] * grumpy[i]);
        }
        int idx = 0;
        int i = 1;
        int j = minutes;
        int maxLoss = currLoss;
        while(j < n){
            currLoss = currLoss + (customers[j] * grumpy[j]) - (customers[i-1] * grumpy[i-1]);
            if(maxLoss < currLoss){
                maxLoss = currLoss;
                idx = i;
            }
            i++;
            j++;
        }
        for(int i=idx; i<(idx+minutes); i++){
            grumpy[i] = 0;
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(grumpy[i] == 0){
                ans += customers[i];
            }
        }
        return ans;
    }
};