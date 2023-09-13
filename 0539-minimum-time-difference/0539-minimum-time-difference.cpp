class Solution {
public:
    int findMinDifference(vector<string>& timepoints) {
        
        vector<int> minutes;
        
        for(int i=0;i<timepoints.size();i++){
            
            string curr=timepoints[i];
            int hr= stoi(curr.substr(0,2));
            int minu= stoi(curr.substr(3,2));
            
            int totalmin= hr*60+minu;
            
            minutes.push_back(totalmin);
            
        }
        
        sort(minutes.begin(),minutes.end());
        
        int mini_val=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++){
            int diff=minutes[i+1]-minutes[i];
            mini_val=min(mini_val,diff);
        }
        
        int lastDiff=(minutes[0]+1440)-minutes[minutes.size()-1];
        
        mini_val=min(mini_val,lastDiff);
        
        return mini_val;
    }
};