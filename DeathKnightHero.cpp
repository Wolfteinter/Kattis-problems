#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    string cad;
    cin>>n;
    m = n;
    while(n--){
        cin>>cad;
        for(int i = 0;i<cad.size() - 1;i++){
            if(cad[i] == 'D' && cad[i+1] == 'C'){m--;break;}
        }
    }
    cout<<m<<endl;
    return 0;
}
