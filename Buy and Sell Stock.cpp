class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprofit=INT_MAX;
        int maxp=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprofit){
                minprofit=prices[i];
            }
            else if(prices[i]-minprofit>maxp){
                maxp=prices[i]-minprofit;
            }
        }
        return maxp;
    }
};
