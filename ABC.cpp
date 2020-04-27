#include <bits/stdc++.h>
using namespace std;
int main(){
    int num[3], k, value;
	char str[5];
    cin>>num[0]>>num[1]>>num[2];
	cin>>str;
	for(int i = 1; i < 3; i++){
		value = num[i];
		for(k = i - 1; k >= 0 && num[k] > value; k--)
			num[k + 1] = num[k];
		num[k + 1] = value;
	}
	for(int i = 0; i < 3; i++){
		if(str[i] == 'A')
			cout<<num[0]<<endl;
		else if(str[i] == 'B')
		    cout<<num[1]<<endl;
		else{
            cout<<num[2]<<endl;
        }
	}

    return 0;

}
