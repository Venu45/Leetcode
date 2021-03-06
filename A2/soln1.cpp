class Solution {
public:
    
    int find_min(int a,int b){
        if(a<=b)return a;
        return b;
    }
    
    int find_max(int a,int b){
        if(a<=b)return b;
        return a;
    }
    
    
    int maxProfit(vector<int>& prices) {
    
    // order n soln
        int ans = 0;
        int min,max;
        min = prices[0];
        max = -1;
        int res;
        
        for(int ii=1;ii<prices.size();ii++){
            min = find_min(min,prices[ii]);
            max = prices[ii];
            res = max-min;
            if(ans < res){
                ans = res;
            }
        }
        return ans;
    }
    
    
};
