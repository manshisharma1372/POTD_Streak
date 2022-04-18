#include<bits/stdc++.h>
using namespace std;
int main() {
int n,h,x;
cin>>n>>h>>x;
int time;
while(n--){
    int t;
    cin>>t;
    time=h-x;

    if(time>=t){
        cout<<"YES";
        break;
    }
    else{
        cout<<"NO"<<endl;
    }
}


return 0;
}
