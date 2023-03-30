class Solution {
public:
    bool isHappy(int n) {
        
        set<int> s;
        
        while(1){
            
            int sum=0;
            while(n!=0){
                
                int last_digit=n%10;
                sum+=pow(last_digit,2);
                n=n/10;
            }
            
            if(sum==1){
                return true;
            }
            
            if(s.find(sum)!=s.end()){
                return false;
            }
            
            s.insert(sum);
            n=sum;
        }
    }
};