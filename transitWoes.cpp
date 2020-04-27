#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,t,n;
    cin>>s>>t>>n;
    int walk[n+1];
    int bus[n];
    int arrives[n];
    for(int i = 0;i<n+1;i++)cin>>walk[i];
    for(int i = 0;i<n;i++)cin>>bus[i];
    for(int i = 0;i<n;i++)cin>>arrives[i];
    s += walk[0];
    for(int i = 0;i<n;i++){
        if(s%arrives[i] == 0){
            s += bus[i];
        }else{
            s += abs(arrives[i] - s);
            s += bus[i];
        }
        s += walk[i+1];
    }
    if(s > t){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }
    return 0;
}
