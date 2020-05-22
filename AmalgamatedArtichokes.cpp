#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    long long int p,a,b,c,d,n;
    vector<double> v;
    cin >> p >> a >> b >> c >> d >> n;
    for(int i = 1;i<=n;i++){
        double res = p * (sin(a * i + b) + cos(c * i + d) + 2);
        v.push_back(res);
    }
    double maxi = v[0];
    double mini = v[0];
    double maxii = -100000000;
    for(int i = 1;i<v.size();i++){
        if(v[i] > maxi){
            maxi = v[i];
            mini = maxi;
        }
        if(v[i] < mini){
            mini = v[i];
            maxii = max(maxii,maxi - mini);
        }
    }
    if(maxii > 0){
        printf("%.10f \n",(double)maxii);
    }else{
        printf("%.10f \n",(double)0);
    }


    return 0;
}
