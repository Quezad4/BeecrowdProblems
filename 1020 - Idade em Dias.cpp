#include <iostream>
using namespace std;
int main(){
	int idade;
	int anos;
	int meses;
	int dias;
	cin >> idade;
	anos = idade/365;
	meses = (idade - anos*365)/30;
	dias = idade - (anos*365 + meses*30);
	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
	
}
	
	
