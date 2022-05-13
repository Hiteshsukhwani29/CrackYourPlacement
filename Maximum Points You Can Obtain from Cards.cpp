class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ctr=0;
        for(int i=cardPoints.size()-k;i<cardPoints.size();i++) 
        {
            ctr+=cardPoints[i];
        }
        for(int i=0,j=ctr;i<k;i++) {
            j-=cardPoints[cardPoints.size()-k+i];
            j+=cardPoints[i];
            ctr=max(ctr,j);
        }
        return ctr;
    }
};
