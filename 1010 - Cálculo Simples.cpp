#include <iostream>
using namespace std;
int main(){
	int cod1;
	int quant1;
	double valor1;
	int cod2;
	int quant2;
	double valor2;
	cin >> cod1 >> quant1 >> valor1 >> cod2 >> quant2 >> valor2;
	cout << fixed;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << (quant1*valor1) + (quant2*valor2) << endl;
}
