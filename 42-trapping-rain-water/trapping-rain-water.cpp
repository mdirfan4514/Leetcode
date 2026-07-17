class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        // prev Greatest
        vector<int> arr(n);
        arr[0] = -1;
        int prevmax = height[0];
        for(int i=1; i<n; i++){
            arr[i] = prevmax;
            if(prevmax < height[i]) prevmax = height[i]; 
        }
        // Next Greatest
        vector<int> brr(n);
        brr[n-1] = -1;
        int nextmax = height[n-1];
        for(int i=n-2; i>=0; i--){
            brr[i] = nextmax;
            if(nextmax < height[i]) nextmax = height[i];
        }
        
        // min vector
        for(int i=0; i<n; i++){
            if(arr[i] < brr[i]){
                brr[i] = arr[i];
            }
        }
        int ans = 0;
        for(int i=1; i<n-1; i++){
            if(height[i] < brr[i]){
               ans += (brr[i]-height[i]);
            }
          } 
            return ans;
    }
};