#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,w,h;
    cin>>n>>w>>h;
    double pit = sqrt(w*w + h*h);
    int aux;
    while(n--){
        cin>>aux;
        if(aux <= pit){
            cout<<"DA"<<endl;
        }else{
            cout<<"NE"<<endl;
        }
    }
    return 0;
}
