#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double x1;
	double y1;
	double x2;
	double y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << fixed;
	cout.precision(4);
	cout << sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) << endl;
}
	
	
	
