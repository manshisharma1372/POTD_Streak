class Solution {
public:
    
    void rev(stack<string> &s,string &ans){
        
        if(s.empty()){
            return;
            
        }
        
        string minpath=s.top();
        s.pop();
        rev(s,ans);
        ans+=minpath;
        
    }
    string simplifyPath(string path) {
        
        stack<string> s;
        
        int i=0;
        while(i<path.size()){
            
            int start=i;
            int end=i+1;
            
            while(end<path.size() && path[end]!='/'){
                end++;
            }
            
            i=end;
            string minpath=path.substr(start,end-start);
            
            if(minpath=="/" || minpath=="/."){
                
                //ignore
                continue;
            }
            if(minpath!="/.."){
                
                //need to push it
                s.push(minpath);
            }
            else if(!s.empty()){
                s.pop();
            }
            
        }
        
        string ans=s.empty()?"/":"";
        rev(s,ans);
        return ans;
    }
};