class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> preSumMod;
        int sum=0;
        int count=0;
        preSumMod[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int mod=sum%k;
            if(mod<0)
            mod+=k;
            if(preSumMod.find(mod)!=preSumMod.end()){
                count+=preSumMod[mod];
            }
            preSumMod[mod]++;
        }
        return count;
    }
};