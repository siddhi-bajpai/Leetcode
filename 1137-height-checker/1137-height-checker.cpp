class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        expected=heights;
        int count=0;
        sort(expected.begin(),expected.end());
        for(int i=0;i<heights.size();i++){
            if(expected[i]!=heights[i])
            count++;
        }
        return count;
    }
};