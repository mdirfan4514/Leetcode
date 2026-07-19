class Solution {
public:
    vector<int> buildLPS(string pattern){
         int m = pattern.size();
         vector<int> lps(m,0);
         int len = 0;
         int i = 1;
         while(i < m ){
            if(pattern[i] == pattern[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0){
                    len = lps[len-1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
         }
          return lps;
    }
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        vector<int> lps = buildLPS(needle);
        int i = 0;
        int j = 0;
        while(i < m){
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }
            if(j == n) return i-j;
            else if(i < m && haystack[i] != needle[j]){
                if(j != 0){
                    j = lps[j-1];
                }
                else{
                    i++;
                }
            }
        }
         return -1;
    }
};