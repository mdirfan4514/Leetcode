class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<n; i++){
            if(st.size()>0 && s[i]==st.top()) st.pop();
            else st.push(s[i]);
        }
        string ans = "";
        while(st.size()>0){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};