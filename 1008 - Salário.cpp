#include <iostream>
using namespace std;
int main(){
	int numero;
	int horas;
	double horat; //horas trabalhadas
	cin >> numero >> horas >> horat;
	cout << "NUMBER = " << numero << endl;
	cout << fixed;
	cout.precision(2);
	cout << "SALARY = U$ " << horas*horat << endl;
}

	
