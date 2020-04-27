#include<bits/stdc++.h>
using namespace std;
int *km;
int *times;
int main(){
    int n;
    cin>>n;
    while(n != -1){
        km = new int[n];
        times = new int[n];
        for(int i= 0;i<n;i++){
            cin>>km[i]>>times[i];
        }
        int suma = 0;
        suma += times[0]*km[0];
        for(int i= 0;i<n-1;i++){
            suma += (times[i+1]-times[i])*km[i+1];
        }
        cout<<suma<<" miles"<<endl;
        cin>>n;
    }
    return 0;
}
