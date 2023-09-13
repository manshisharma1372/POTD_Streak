class Solution {
public:
    bool isAnagram(string s, string t) {
        
        /*
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s.compare(t)==0){
            return true;
        }
        else{
               return false;
        }
        */
        
        map<char,int> m;
        
            for(int i=0;i<s.size();i++){
                m[s[i]]++;
            }
         
        for(int j=0;j<t.size();j++){
            m[t[j]]--;
        }
        
        for(auto it:m){
            
            if(it.second!=0){
                return false;
            }
        }
     return true;
    }
};