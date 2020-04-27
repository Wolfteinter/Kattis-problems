#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int p = 1,t = 0;

    cin>>n;
    if(n <= 2){
        cout<<n<<endl;
    }else{
        t++;
        while(p < n){
            p*=2;
            t++;
        }
        cout<<t<<endl;
    }
    return 0;
}
