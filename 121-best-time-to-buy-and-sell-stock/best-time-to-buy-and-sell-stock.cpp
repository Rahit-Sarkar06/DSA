class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       if(n==1) return 0;
       int min=prices[0];
       int maxprofit;
       for(int i=0;i<n;i++){
        if(prices[i]<min){
            min=prices[i];
        }else if(prices[i]-min>maxprofit){
            maxprofit=prices[i]-min;
        }
       }
       return maxprofit;
    }
};