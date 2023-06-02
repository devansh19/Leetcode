class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int i,j,sum=0;
        int n=cardPoints.size();

        for(i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }

        int maxsum = sum;

        for(i=k-1,j=n-1;i>=0;i--,j--){
            sum-=cardPoints[i];
            sum+=cardPoints[j];
            maxsum=max(maxsum,sum);
        }
      return maxsum;
    }
   
};
