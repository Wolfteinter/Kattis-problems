#include<bits/stdc++.h>
using namespace std;
int main(){
    int tam,n,m;
    cin>>tam>>n>>m;
    cout<<max(abs(tam - n),n) * max(abs(tam - m),m) * 4<<endl;
    return 0;

}
