class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> m;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        char max_freq_char;
        int maxfreq=INT_MIN;
        for(auto it:m){
           
            if(it.second>maxfreq){
                maxfreq=it.second;
                max_freq_char=it.first;
            }
        }
        
        int index=0;
        
        while(maxfreq >0 && index<s.size()){
            
            s[index]=max_freq_char;
            maxfreq--;
            index+=2;
            
        }
        
        if(maxfreq!=0){
            return "";
        }
        
        m[max_freq_char]=0;
        
       for(auto it:m){
           int val=it.second;
            while(val>0){
                index= index>=s.size()? 1:index;
                s[index]=it.first;
                val--;
                index+=2;
            }
        }
        
        return s;
    }
};