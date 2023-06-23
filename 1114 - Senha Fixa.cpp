#include <iostream>
using namespace std;
int main(){
	int senha;
	for(int X = 0; X<1;){
		cin >> senha;
		if(senha == 2002 ){
			cout << "Acesso Permitido" << endl;
			X++;
		}
		else{
			cout << "Senha Invalida" << endl;
		}
	}
}
