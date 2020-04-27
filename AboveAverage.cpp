#include<bits/stdc++.h>
using namespace std;
int main(){
    cout.precision(3);
    cout.setf( std::ios::fixed, std:: ios::floatfield );
    int n,t;
    double suma=0.0;
    cin>>n;
    while(n--){
        suma = 0;
        cin>>t;
        int lista[t];
        for(int i = 0;i<t;i++){
            cin>>lista[i];
            suma += lista[i];
        }
        suma /= t;
        double mayor = 0;
        for(int i = 0;i<t;i++){
            if(lista[i] > suma){
                mayor++;
            }
        }
        cout<<mayor/t*100<<"%"<<endl;
    }
    return 0;
}
