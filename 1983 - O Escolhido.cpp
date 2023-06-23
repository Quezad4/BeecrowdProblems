#include <iostream>
using namespace std;
int main(){
	double X = 1; 
	double matricula, nota, N, matriculan, notan;
	cin >> N;
	notan = 0;
	while(X <= N){
		X ++;
		cin >> matricula >> nota; 
		if(notan<nota){
			notan = nota;
			matriculan = matricula;
		}
	}
	if(notan<8){
		cout << "Minimum note not reached" << endl;
	}
	else{
		cout << matriculan << endl;
	}
	
}
