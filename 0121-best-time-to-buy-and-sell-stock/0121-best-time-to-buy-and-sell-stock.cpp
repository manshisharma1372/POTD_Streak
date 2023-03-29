class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        //o(n2) //gives TLE
        /*
        int ans=0;
        
        int i=0;
        int j=i+1;
        while(i<prices.size() && j<prices.size())
        {
            for(int j=i+1;j<prices.size();j++){
            int p= prices[j]-prices[i];
            ans=max(ans,p);
            }
            i++;

        }
        return ans;
        */
        
        
        int lsf=INT_MAX;
       int pist = 0;
        int op=0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
};