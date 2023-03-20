class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        
        //step 1 convert time string into minute integer val
        vector<int> minutes;
        
        for(int i=0;i<timePoints.size();i++){
            
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,2));
            
            int minu=stoi(curr.substr(3,2));
            
            int total_min=hours*60+minu;
            
            minutes.push_back(total_min);
         
        }
            //step 2 sort
            
            sort(minutes.begin(),minutes.end());
            
            //step 3 cal difference and then cal min diff
            
           int mini_val=INT_MAX;
            
            for(int i=0;i<minutes.size()-1;i++)
            {
                int diff=minutes[i+1]-minutes[i];
                
                mini_val=min(mini_val,diff);
            }
           
        
        //corner case
        
        int last_diff=(minutes[0]+1440)-minutes[minutes.size()-1];
        
        mini_val=min(mini_val,last_diff);
        
            
        
      return mini_val;
        
    }
};