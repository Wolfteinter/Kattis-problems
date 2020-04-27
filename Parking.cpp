#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,aux;
    cin>>n;
    while(n--){
        cin>>x;
        int maxi = -100000;
        int mini = 100000;
        while(x--){
            cin>>aux;
            mini = min(aux,mini);
            maxi = max(aux,maxi);
        }
        cout<<(maxi - mini)*2<<endl;
    }
}
