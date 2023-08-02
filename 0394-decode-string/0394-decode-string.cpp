class Solution {
public:
    string decodeString(string s) {
        
        stack<string> st;
        
        for(auto ch:s){
            
            if(ch==']'){
                
                string stringtorepeat="";
                while(!st.empty() && !isdigit(st.top()[0])){
                    string top=st.top();
                    stringtorepeat+=top=="["?"":top;
                    st.pop();
                }
                
                string numerictimes="";
                while(!st.empty() && isdigit(st.top()[0])){
                    numerictimes+=st.top();
                    st.pop();
                }
                
                reverse(numerictimes.begin(),numerictimes.end());
                
                int n=stoi(numerictimes);
                
                //final decoding
                string currdecode="";
                while(n--){
                    
                    currdecode+=stringtorepeat;
                }
                st.push(currdecode);
                
            }
            
            else{
                string temp="";
                temp+=ch;
                st.push(temp);
            }
        }
        
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};