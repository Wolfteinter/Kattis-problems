#include<bits/stdc++.h>
using namespace std;
int main(){
    string cad;
    cin>>cad;
    for(int i = 0;i<cad.size()-1;i++){
        if(cad[i]=='s' && cad[i+1]=='s'){
            cout<<"hiss"<<endl;
            return 0;
        }
    }
    cout<<"no hiss"<<endl;
    return 0;
}
