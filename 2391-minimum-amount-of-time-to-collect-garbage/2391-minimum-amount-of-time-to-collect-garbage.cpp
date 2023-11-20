class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int pickp=0,pickm=0,pickg=0;
        
        int travelp=0,travelg=0,travelm=0;
        
        int lastp=0,lastg=0,lastm=0;
        
        for(int i=0;i<garbage.size();i++){
            
            string curr=garbage[i];
            
            for(int j=0;j<curr.length();j++){
                char ch=curr[j];
                
                if(ch=='P'){
                    pickp++;
                    lastp=i;
                }
                
                else if(ch=='G'){
                    pickg++;
                    lastg=i;
                }
                
                else if(ch=='M'){
                    pickm++;
                    lastm=i;
                }
            }
        }
        
        
        //calc travel
        
        for(int i=0;i<lastp;i++){
            travelp+=travel[i];
        }
         for(int i=0;i<lastg;i++){
            travelg+=travel[i];
        }
         for(int i=0;i<lastm;i++){
            travelm+=travel[i];
        }
        
        int ans=(pickp+travelp)+(pickg+travelg)+(pickm+travelm);
        
        return ans;
    }
};