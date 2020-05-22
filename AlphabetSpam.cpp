#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    float n = s.length();
    float num = 0;
    float numM = 0;
    float numm = 0;
    float nume = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == '_')num++;
        else if(s[i] >= 65 && s[i]<= 90)numM++;
        else if(s[i] >= 97 && s[i]<= 122)numm++;
        else nume++;
    }
    printf("%.10f \n",(double)num/n);
    printf("%.10f \n",(double)numm/n);
    printf("%.10f \n",(double)numM/n);
    printf("%.10f \n",(double)nume/n);
    return 0;
}
