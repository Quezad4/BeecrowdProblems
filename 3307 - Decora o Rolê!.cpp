#include <iostream>
#include <cmath>
using namespace std;
	int main(){
		int N;
		float pi = 3.14;
		double area, raio;
		cin >> N;
		for(int i = 0; i<N; i++){
			cin >> area;
			raio = sqrt(area/(pi*4));
			cout<<fixed;
			cout.precision(2);
			if(raio <12){
				cout << "vermelho = R$ " << area*0.09 << endl;
			}
			else{
				if(raio >=12 && raio<15){
					cout << "azul = R$ " << area*0.07 << endl;
				}
				else{
					cout << "amarelo = R$ " << area*0.05 << endl;
				}
			}
		}
		
	}
