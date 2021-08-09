class Solution {
public:
    
    
    
    int maxProfit(vector<int>& prices) {
      
      // order n^2 soln
        int sellmax = -1;
        int ans = 0;
        for(int ii=0;ii<prices.size();ii++){
            sellmax = -1;
            for(int jj=ii+1;jj<prices.size();jj++){
                if(prices[jj]>prices[ii] && prices[jj]>sellmax){
                    sellmax = prices[jj];
                }
            }
            if(sellmax - prices[ii] > ans){
                ans = sellmax - prices[ii];
            }
        }
        return ans;
    }
    
};
