#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,aux;
    cin>>n;
    while(n--){
        cin>>aux;
        if(abs(aux) % 2 == 0){
            cout<<aux<<" is even"<<endl;
        }else{
            cout<<aux<<" is odd"<<endl;
        }
    }
    return 0;
}
