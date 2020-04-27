#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,z;
    cin>>z;
    while(z--){
        cin>>n;
        long long int prod = 1;
        for(long long int i = 1;i <=n;i++){
            prod *= i;
        }
        string aux = to_string(prod);
        cout<<aux[aux.size()-1]<<endl;
    }
    return 0;
}
