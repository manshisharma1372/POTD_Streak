class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char,char> m;
        set<char> st; 
        
        for(int i=0;i<s.size();i++){
            
            if(m.count(s[i])==0 && st.count(t[i])==0){
                m[s[i]]=t[i];
                
                st.insert(t[i]);
            }
            
            else if( m.count(s[i])==0 && st.count(s[i]) ){
                return false;
            }
            
            else if( m[s[i]] != t[i]){
                return false;
                
            }
            
            
        }
        return true;
    }
};