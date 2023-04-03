class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char ans;
        map<char,int> m;
        for(auto &it:s){
            m[it]++;
        }
        
        for(auto &it:t){
               
            if(--m[it]<0){
                ans=it;
           
        }
        }
      
        return ans;
    }
};