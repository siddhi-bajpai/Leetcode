class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int res=0;
        while(tickets[k]!=0){
            for(int i=0;i<tickets.size();i++){
                if(tickets[k]==0)
                    break;
                if(tickets[i]==0)
                    continue;
                tickets[i]--;
                res++;
            }
        }
        return res;
    }
};