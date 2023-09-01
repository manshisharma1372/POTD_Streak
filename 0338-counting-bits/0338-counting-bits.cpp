class Solution {
public:
    
    int countOnes(int num){
            int sum = 0;
         
            while(num != 0)
            {
                sum += num%2;
                num = num/2;
            }
        
        return sum;
    }
    vector<int> countBits(int n) {
        
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
            int toPush=countOnes(i);
            
            ans.push_back(toPush);
        }
        
        return ans;
    }
};