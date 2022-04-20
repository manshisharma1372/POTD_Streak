#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int x;
cin>>x;
int c=0;
if(x%10==0){
    cout<<"0"<<endl;
}
else if(x%10!=0){
    x=2*x;
    if(x%10==0){
        c=c+1;
        cout<<c<<endl;
    }
    else cout<<"-1"<<endl;
    
}

}
return 0;
}