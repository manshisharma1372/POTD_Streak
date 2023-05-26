
class Encrypter {
public:
   
    map<char,string> m;
    vector<string>d;
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        
        for(int i=0;i<keys.size();i++){
            m[keys[i]]=values[i];
        }
         d = dictionary;
        
    }
    
    string encrypt(string s) {
        string ans="";
       for(int i=0;i<s.size();i++) {
        if(m.count(s[i])==0){
            return " ";
        }
        ans+=m[s[i]];
       }
        return ans;
        
    }
    
    int decrypt(string word2) {
        
        int ans=0;
        for(int i=0;i<d.size();i++){
        string si=encrypt(d[i]);
            
            if(si==word2){
                ans++;
            }
            }
        return ans;
    }
};













    
/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */