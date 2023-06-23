#include <iostream>
using namespace std;
int main(){
	float media, nota;
	media = 0;
	for(int X = 0; X<2;){
		cin >> nota;
		if(nota < 0 or nota>10){
			cout << "nota invalida" << endl;
		}
		else{
			media += nota;
			X++;
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << "media = " << media/2 << endl;
}
