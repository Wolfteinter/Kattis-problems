#include<bits/stdc++.h>
using namespace std;
int hashx[1001];
int hashy[1001];
int main(){
    vector<int> xs,ys;
    int x,y;
    for(int i = 0;i<3;i++){
        cin>>x>>y;
        hashx[x]++;
        hashy[y]++;
        xs.push_back(x);
        ys.push_back(y);
    }
    for(int i = 0;i<xs.size();i++){
        if(hashx[xs[i]] == 1){
            cout<<xs[i]<<" ";
            break;
        }
    }
    for(int i = 0;i<ys.size();i++){
        if(hashy[ys[i]] == 1){
            cout<<ys[i]<<endl;
            break;
        }
    }
    return 0;
}
