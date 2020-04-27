#include<bits/stdc++.h>
using namespace std;
vector<int> *lista;
bool dfs(int v){
    vector<int>::iterator i;
    vector<int>::iterator j;
    vector<int>::iterator k;
    for (i = lista[v].begin(); i != lista[v].end(); ++i){
        //buscar en la lista de cada uno a ver si esta en la lista
        for (j = lista[*i].begin(); j != lista[*i].end(); ++j){
            for (k = lista[v].begin(); k != lista[v].end(); ++k){
                if(*j != *i){
                    if(*j == *k)return true;
                }
            }
        }

    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int aux;
    while(n != -1){
        lista = new vector<int>[n];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin>>aux;
                if(aux == 1){
                    lista[i].push_back(j);
                    lista[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!dfs(i)){
                cout<<i<<" ";
            }
        }
        cout<<endl;

        cin>>n;
    }
    return 0;
}
