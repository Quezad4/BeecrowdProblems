#include <iostream>
using namespace std;
int main(){
	double nota1;
	double nota2;
	cin >> nota1;
	cin >> nota2;
	double media;
	media = nota1*3.5 + nota2*7.5;
	cout << fixed;
	cout.precision(5);
	cout << "MEDIA = " << media/11 << endl;
	
	
}
