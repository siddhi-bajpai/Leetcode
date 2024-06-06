class Solution {
public:
    bool isPossible(vector<int>& hand, int groupSize, int i){
        int next=hand[i]+1;
        hand[i]=-1;
        i+=1;
        int count=1;
        while(i<hand.size() && count<groupSize){
            if(hand[i]==next){
                next=hand[i]+1;
                count++;
                hand[i]=-1;
            }
            i++;
        }
        if(count==groupSize)
        return true;
        return false;
    }
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0)
        return false;
        sort(hand.begin(),hand.end());
        for(int i=0;i<hand.size();i++){
            if(hand[i]>=0){
                
                if(!(isPossible(hand, groupSize, i)))
                return false;
            }
        }
        return true;
    }
};