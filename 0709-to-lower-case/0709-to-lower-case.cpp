class Solution {
public:
    string toLowerCase(string s) {
        
        
        //using lib func
        /*
        string ans;
        for(int i=0;i<s.length();i++){
            ans.push_back(tolower(s[i]));
        }
        return ans;
          }
        */

        
        
        
        
        //without func
        for(auto&it:s){
            if(it>='A' && it<='Z'){
                it=it+'a'-'A';
            }
        }
        return s;
        }
    
};