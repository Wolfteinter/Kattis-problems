#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lista[n];
    for(int i = 0;i<n;i++){
        cin>>lista[i];
    }
    sort(lista,lista+n);
    int pos = 0;
    int suma = 0;
    while(pos < n){
        if(pos + 3 <= n){
            for(int i = 1;i<=2;i++){
                suma += lista[pos + i];
            }
            pos = pos + 3;
        }else{
            suma += lista[pos];
            pos++;
        }
    }
    cout<<suma<<endl;
    return 0;
}
