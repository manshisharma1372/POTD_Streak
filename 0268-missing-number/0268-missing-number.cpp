class Solution {
public:
    int missingNumber(vector<int>& a) {
      
    long long n=a.size();
    
    long long sn=(n*(n+1)/2);
    long long s2n=(n*(n+1)*(2*n+1))/6;
    long long s=0;
    long long s2=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        s2+=(long long)a[i]* (long long)a[i];
        
    }
    
    long long val1=s-sn;
    long long val2=s2-s2n;
        if(val1!=0){
               val2=val2/val1;
        }
 
    long long x=(val1+val2)/2;
    long long y=x-val1;
    
    return (int)y;
    

    }
};