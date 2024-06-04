class Solution {
public:
    int longestPalindrome(string s) {
        set<char> st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])!=st.end()){
                count+=2;
                st.erase(s[i]);
            }
            else{
                st.insert(s[i]);
            }
        }
        if(st.size()!=0){
            count+=1;
        }
        return count;
    }
};