#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int a,b,x,yr;
        cin>>a>>b>>x;
        yr=(b-a)/x;
        cout<<yr<<endl;
    }
	return 0;
}