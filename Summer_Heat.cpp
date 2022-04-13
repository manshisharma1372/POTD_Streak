#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int xa,xb,XA,XB,total;
        cin>>xa>>xb>>XA>>XB;
        total=(XA/xa)+(XB/xb);
        cout<<total<<endl;
    }
	return 0;
}