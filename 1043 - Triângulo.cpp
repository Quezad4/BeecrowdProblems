#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a, b, c;
	float maiorab, maiortot;
	cin >> a >> b >> c;
	maiorab = ((a+b)+abs(a-b))/2;
	maiortot = ((maiorab+c)+abs(maiorab-c))/2;
	cout << fixed;
	cout.precision(1);
	if(maiortot == a){
		if(maiortot> (b+c) or maiortot == (b+c)){
			cout << "Area = " << ((a+b)*c)/2 << endl;
		}
		else{
			cout << "Perimetro = " << a+b+c << endl;
		}
	}
	else{
		if(maiortot ==b){
			if(maiortot>(a+c) or maiortot == (a+c)){
				cout << "Area = " << ((a+b)*c)/2 << endl;
			}
			else{
				cout << "Perimetro = " << a+b+c << endl;
			}
		}
		else{
			if(maiortot>(c+b) or maiortot == (c+b)){
				cout << "Area = " << ((a+b)*c)/2 << endl;
			}
			else{
				cout << "Perimetro = " << a+b+c << endl;
			}
		}
	}
}
