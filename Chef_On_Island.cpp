#include <iostream>
using namespace std;
#include<cmath>
#include <algorithm>
int main() {
	int t;
    cin>>t;
    while(t--){
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        int days=min(x/xr,y/yr);
        if(days>=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
	return 0;
}
