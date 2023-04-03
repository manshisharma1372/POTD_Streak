class Solution {
public:
    string interpret(string command) {
         string s="";
        string ans;
        for(char ch: command){
            s+=ch;
            if(s=="G"){
                ans+="G";
                s="";
            }
            else if(s=="()")
            {
                ans+="o";
                s="";
            }
            
            else if(s=="(al)"){
                ans+="al";
                s="";
            }
        }
        return ans;
    }
};