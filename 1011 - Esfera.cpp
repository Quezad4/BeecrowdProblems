#include <iostream>
using namespace std;
int main(){
	double pi;
	pi = 3.14159;
	double raio;
	cin >> raio;
	cout << fixed;
	cout.precision(3);
	cout << "VOLUME = " << 4.0/3*pi*raio*raio*raio << endl;
}
