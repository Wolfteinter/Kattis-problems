#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int lado = 2;
    int suma = 4;
    cin>>n;
    for(int i = 0;i<n;i++){
        lado = lado * 2 - 1;
        cout<<"lado "<<lado<<endl;
        suma += lado*lado - (i+2)*(i+2);
    }
    cout<<suma<<endl;
    return 0;
}
