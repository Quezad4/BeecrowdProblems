#include <iostream>
using namespace std;
int main(){
	int cod;
	int quantidade;
	cin >> cod >> quantidade;
	cout << fixed;
	cout.precision(2);
	if(cod == 1){
		cout << "Total: R$ " << 4.0*quantidade << endl;	
	}
	else{
		if(cod == 2)
		cout << "Total: R$ " << 4.5*quantidade << endl;
		else {
			if( cod == 3)
			cout << "Total: R$ " << 5.0*quantidade << endl;
			else{
				if(cod == 4)
				cout << "Total: R$ " << 2.0*quantidade << endl;
				else{
					cod == 5;
					cout << "Total: R$ " << 1.5*quantidade << endl;
				}
			}
		}
	}
	
	
	
	
}
