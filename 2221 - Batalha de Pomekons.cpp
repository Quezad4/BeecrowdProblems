#include <iostream>
using namespace std;
int main(){
	int bonus, AD, DD, LD, AG, DG, LG, VGG, VGD, N;
	cin >> N;
	for(int X = 0; X<N; X++){
		cin >> bonus >> AD >> DD >> LD >> AG >> DG >> LG;
		if(LD%2 == 0){
			VGD = (AD+DD)/2 + bonus;
		}
		else{
			VGD = (AD+DD)/2;
		}
		if(LG%2 == 0){
			VGG =(AG+DG)/2 + bonus;
		}
		else{
			VGG = (AG+DG)/2;
		}
		if(VGD>VGG){
			cout << "Dabriel" << endl;
		}
		else{
			if(VGG>VGD){
				cout << "Guarte" << endl;
			}
			else{
				if(VGG == VGD){
					cout << "Empate" << endl;
				}
			}
		}
	}
}
