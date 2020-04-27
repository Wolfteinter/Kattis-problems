#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin>>x;
    cin>>n;
    int total = x;
    int aux;
    while(n--){
        cin>>aux;
        total += x - aux;
    }
    cout<<total<<endl;
    return 0;
}
