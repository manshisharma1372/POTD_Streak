class Solution {
public:
    char findTheDifference(string s, string t) {
        
        
        //using map
        /*
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
        */
        
        //using sort
       int n = s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<n; i++) 
            if(s[i]!=t[i]) return t[i];
        return t[n];
    }
};