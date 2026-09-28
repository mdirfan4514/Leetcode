class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int m = stones.size();
        priority_queue<int> pq;
        for(int i=0; i<m; i++){
            pq.push(stones[i]);
        }
        while(pq.size() > 1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(y != x){
                int z = y-x;
                pq.push(z);
            }
        }
        if(pq.size()==1) return pq.top();
        else return 0;
    }
};