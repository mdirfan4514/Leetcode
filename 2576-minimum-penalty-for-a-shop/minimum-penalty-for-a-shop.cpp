class Solution {
public:
    int bestClosingTime(string cust) {
        int n = cust.size();
        vector<int> pre(n+1);
        int pref = 0;
        for(int i=0; i<n; i++){
            pre[i] = pref;
            if(cust[i] == 'N') pref++;  
        }
        pre[n] = pref;

        vector<int> suf(n+1);
        suf[n] = 0;
        int suff = 0;
        for(int i=n-1; i>=0; i--){
            if(cust[i] == 'Y') suff++;
            suf[i] = suff;
        }

        for(int i=0; i<pre.size(); i++){
            pre[i] += suf[i];
        }

        int idx = 0;
        for(int i=1; i<=n; i++){
            if(pre[i] < pre[idx]){
                idx = i;
            }
        }
        return idx;
    }
};