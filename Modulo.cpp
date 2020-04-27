#include<bits/stdc++.h>
using namespace std;
int main(){
    int aux;
    set<int> modulos;
    for(int i = 0;i<10;i++){
        cin>>aux;
        modulos.insert(aux%42);
    }
    cout<<modulos.size()<<endl;
    return 0;
}
