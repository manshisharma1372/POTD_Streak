#include <iostream>
using namespace std;
#include<cmath>

int main() {
	int t;
    cin>>t;
    while(t--){
        int h,x,y,c; 
        cin>>h>>x>>y>>c; 
        int a=x+floor(y/2);
        int water=a*h;
        if(water<=c){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }
     
	return 0;
}