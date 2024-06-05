class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26,INT_MAX);
        vector<string> res;
        for(auto word:words){
         vector<int> word_freq(26,0);
         for(char ch:word){
            word_freq[ch-'a']++;
         }
         for(int i=0;i<26;i++){
            freq[i]=min(freq[i],word_freq[i]);
         }
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<freq[i];j++)
            res.push_back(string(1,'a'+i));
        }
        return res;
    }
};