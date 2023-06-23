#include <iostream>
#include <math.h>
#define pi 3.1415
using namespace std;
int main(){
	int R, L;
	float V;
	cin >> R >> L;
	V = (4* pi*R*R*R)/3;
	cout << floor(L/V)<< endl;
}
