#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int p,m,v;
    cin>>p>>m>>v;
    int dis= (m-(p-1))*v;
    cout<<dis<<endl;
}
return 0;
}