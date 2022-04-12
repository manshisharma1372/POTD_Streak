#include <iostream>
using namespace std;

int main() {
		int t,x,y,z;
        cin>>t;
        while(t--){
        cin>>x>>y>>z;
         if((z*2)+x>=y){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        }
    
	return 0;
}
