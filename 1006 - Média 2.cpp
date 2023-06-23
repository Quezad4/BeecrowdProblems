#include <iostream>
using namespace std;
int main(){
	double nota1;
	double nota2;
	double nota3;
	cin >> nota1;
	cin >> nota2;
	cin >> nota3;
	double media;
	media = nota1*2 + nota2*3 + nota3*5 ;
	cout << fixed;
	cout.precision(1);
	cout << "MEDIA = " << media/10 << endl;
	
	
}
