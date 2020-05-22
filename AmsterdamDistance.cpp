#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793
double YDISTANCE;
double *XDISTANCE;
int m,n;
double r;

double minCost(int xi, int yi,int xf,int yf) {
	double a = abs(yf - yi) * YDISTANCE + XDISTANCE[n - min(yf,yi)] * abs(xf - xi);
	double b =  (yf + yi) * YDISTANCE;
	return min(a,b);
}
int main(){
	int xi,yi;
	int xf,yf;
    cin >> m >> n >> r;
	cin >> xi >> yi >> xf >> yf;
	YDISTANCE = r/n;
	XDISTANCE =  new double[n];
    for(int i = 0; i < n; i++){
        double radio = r - YDISTANCE * i;
        double p = PI*radio;
		XDISTANCE[i] = p/m;
    }
	printf("%.10f \n",(double)minCost(xi,yi,xf,yf));
    return 0;
}
