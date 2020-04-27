#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,m;
    cin>>n>>m;
    double maxi = n * m;
    int res = maxi;
    double x;
    for(int i = maxi;i >= 0;i--){
        x = (i / n);
        if(ceil(x) != m)break;
        else{
            res = i;
        }
    }
    cout<<res<<endl;
    return 0;
}
