class Solution {
public:
    
    /* using func
    int mySqrt(int x) {
        return sqrt(x);
    }
    
    */
    
   
    long long int mySqrt(int x) {
        
          long long int l=1,h=x;
         int ans=0;
        while(l<=h){
          long long int mid=(l+h)/2;
          long long int square_mid= (long long int)(mid*mid);  
            if(square_mid==x){
                ans= mid;
                break;
            }
            
              else if(square_mid<x){
                l=mid+1;
                ans=mid;
            }
            
            else if(square_mid>x){
                h=mid-1;
                
            }
          
        }
         return ans;
     }
    
    
};