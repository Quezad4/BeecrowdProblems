#include <iostream>
using namespace std;
int main(){
	double n;
	n = 3.14159;
	double raio;
	cin >> raio;
	double area;
	area= n*raio*raio;
	cout << fixed;
	cout.precision(4);
	cout << "A=" << area << endl;
}

