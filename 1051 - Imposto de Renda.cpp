#include <iostream>
using namespace std;
int main(){
	double renda;
	cin >> renda;
	cout << fixed;
	cout.precision(2);
	if(renda> 0.00 and renda<2000.00){
		cout << "Isento" << endl;
	}
	else{
		if(renda>=2000.01 and renda<3000.00){
			cout << "R$ " << (renda-2000)*8/100 << endl;
		}
		else{
			if(renda>=3000.01 and renda<4500.00){
				cout << "R$ " << (renda-3000)*18/100 + ((renda - (renda-3000)-2000)*8/100)  << endl;
			}
			else{
				cout << "R$ " <<  (renda-4500)*28/100 + (renda -(renda-4500)-3000)*18/100 +  (renda - (renda-4500) - ((renda -(renda-4500)-3000)) -2000)*8/100 << endl;
			}
		}
	}
}
