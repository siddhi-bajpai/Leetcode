class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26,0);
        vector<string> res;
        for(char ch='a';ch<='z';ch++){
            int minCount=INT_MAX;
            for(string word:words){
                int count=0;
                for(char c:word){
                    if(ch==c)
                    count++;
                }
                minCount=min(minCount,count);
            }
            string s="";
            while(minCount!=0){
                res.push_back(s+ch);
                minCount--;
            }
        }
        return res;
    }
};