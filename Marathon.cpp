#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int D,d,a,b,c; 
    cin>>D>>d>>a>>b>>c;
    int maxd= d*D;
      if(maxd>=42){
	        cout<<c<<endl;
	    }else if(maxd>=21){
	        cout<<b<<endl;
	    }else if(maxd>=10){
	        cout<<a<<endl;
	    }else{
	        cout<<"0"<<endl;
	    }
    }
return 0;
}
