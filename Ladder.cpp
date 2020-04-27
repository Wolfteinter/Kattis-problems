#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,v;
    cin>>h>>v;
    cout<<ceil(h*sin(90*3.14159/180)/sin(v*3.14159/180))<<endl;
    return 0;
}
