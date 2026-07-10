class Solution {
public:
    int count = 0;
    void merge(vector<int>& a ,vector<int>& b, vector<int>& res){
    int j =0;
    for(int i = 0; i<a.size(); i++){
        while(j<b.size() && (long long)a[i] > 2LL* b[j]){
            j++;
        }
        count+=j;
    }
    int i= 0;
    j= 0;
    int k= 0;
    while(i<a.size() && j<b.size()){
        if(a[i] < b[j]){
            res[k] = a[i];
            i++;
            k++;
        }
        else{
            res[k] = b[j];
            j++;
            k++;
        }
      }
      while(i<a.size()){
        res[k] = a[i];
        i++;
        k++; 
      }
      while(j<b.size()){
        res[k] = b[j];
        j++;
        k++; 
      }
    }
    void mergeSort(vector<int>& v){
        if(v.size() <= 1) return;
         int n = v.size();
         int n1 = n/2;
         int n2 = n-n1;
         vector<int> a(n1), b(n2);
         for(int i=0; i<a.size(); i++){
            a[i] = v[i];
         }
         for(int i=0; i<b.size(); i++){
            b[i] = v[n1+i];
         }
         mergeSort(a);
         mergeSort(b);
         merge(a, b, v);
    }
    int reversePairs(vector<int>& nums) {
        count = 0;
        mergeSort(nums);
        return count;
    }
};