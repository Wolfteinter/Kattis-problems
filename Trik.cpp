#include<bits/stdc++.h>
using namespace std;
int main(){
    string cad;
    cin>>cad;
    int aux;
    int arr[] = {1,0,0};
    for(int i = 0;i<cad.size();i++){
        if(cad[i] == 'A'){
            aux = arr[0];
            arr[0] = arr[1];
            arr[1] = aux;
        }else if(cad[i] == 'B'){
            aux = arr[1];
            arr[1] = arr[2];
            arr[2] = aux;
        }else if(cad[i] == 'C'){
            aux = arr[0];
            arr[0] = arr[2];
            arr[2] = aux;
        }
    }
    for(int i = 0;i<3;i++){
        if(arr[i]==1){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}
