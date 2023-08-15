class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        //kitna petrol kam padd gya
        int deficit=0;
        
        //kitna petrol hai
        int balance=0;
        
        //kaha se ckt start hoga
        int start=0;
        
        for(int i=0;i<gas.size();i++){
            
            
            balance+=gas[i]-cost[i];
            
            if(balance<0){
                
                deficit+=abs(balance);
                start=i+1;
                balance=0;
                
            }
            
        }
        
        if(balance>=deficit){
            return start;
        }
        else{
            return -1;
        }
        
    }
};