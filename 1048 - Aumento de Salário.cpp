#include <iostream>
using namespace std;
int main(){
	double salario, nsalario;
	cin >> salario;
	cout << fixed;
	cout.precision(2);
	salario == 0;
	if(salario<= 400.00){
		nsalario = (salario*15/100) + salario;
		cout << "Novo salario: " << nsalario << endl;
		cout << "Reajuste ganho: " << nsalario - salario << endl;
		cout << "Em percentual: 15 %" << endl; 
	}
	else{
		if(salario> 400.00 and salario<= 800.00){
		nsalario = (salario*12/100) + salario;
		cout << "Novo salario: " << nsalario << endl;
		cout << "Reajuste ganho: " << nsalario - salario << endl;
		cout << "Em percentual: 12 %" << endl; 
	}
	else{
		if(salario> 800.00 and salario<= 1200.00){
		nsalario = (salario*10/100) + salario;
		cout << "Novo salario: " << nsalario << endl;
		cout << "Reajuste ganho: " << nsalario - salario << endl;
		cout << "Em percentual: 10 %" << endl; 
	}
	else{
		if(salario> 1200.00 and salario<= 2000.00){
		nsalario = (salario*7/100) + salario;
		cout << "Novo salario: " << nsalario << endl;
		cout << "Reajuste ganho: " << nsalario - salario << endl;
		cout << "Em percentual: 7 %" << endl; 
	}
	else{
		if(salario> 2000.00){
		nsalario = (salario*4/100) + salario;
		cout << "Novo salario: " << nsalario << endl;
		cout << "Reajuste ganho: " << nsalario - salario << endl;
		cout << "Em percentual: 4 %" << endl; 
		
	}
}

}
}
}
}
