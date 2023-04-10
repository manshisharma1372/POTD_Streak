class Solution {
public:
    
    void removeocc(string &s,string &part){
        
        int found=s.find(part);
        if(found!=string::npos){
            //remove part string
            
            string left=s.substr(0,found);
            string right=s.substr(found+part.size(),s.size());
            s=left+right;
            removeocc(s,part);
        }
        
        else{
            
            //all oc have been removed base case
            return;
        }
        
    }
    string removeOccurrences(string s, string part) {
        
        
        //iterative soln
        /*
        int pos=s.find(part);
        while(pos!=string::npos){
            
            s.erase(pos,part.length());
            
            pos=s.find(part);
            
        }
        return s;
        */
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        //recursive soln
        removeocc(s,part);
        return s;
        
    }
};