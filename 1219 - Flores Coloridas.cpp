#include <iostream>
#include <math.h>
#define pi 3.1415926535897
using namespace std;
int main(){
	double a, b, c, p;
	while(cin>>a>>b>>c){
		double areaTri, r, areaCirc1, areaCirc2;
		p = (a+b+c)/2;
		areaTri = sqrt(p*(p-a)*(p-b)*(p-c));
		r = areaTri/p;
		areaCirc1 = r*r*pi;
		r = (a*b*c)/(areaTri*4);
		areaCirc2 = r*r*pi;
		cout << fixed;
		cout.precision(4);
		cout << areaCirc2 - areaTri<< " " << areaTri-areaCirc1 << " " << areaCirc1 << endl; 
		}
	
}
