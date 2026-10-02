class Solution {
public:
    void reversePart(int i, int j, vector<int>& arr){
        int n = arr.size();
        while(i <= j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0) return;
        if(k > n) k %= n;
        reversePart(0,n-1,nums);
        reversePart(0,k-1,nums);
        reversePart(k,n-1,nums);
    }
};