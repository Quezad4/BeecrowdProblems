#include <iostream>
using namespace std;
int main(){
	int X, valor, in, out;
	X=0;
	in=0;
	out=0;
	cin>> X;
	for(int N= 0; N<X; N++){
		cin >> valor;
		if(valor>=10 and valor<=20){
			in++;
		}
		else{
			out++;
		}
	}
	cout << in << " in" << endl;
	cout << out << " out" << endl;
}
