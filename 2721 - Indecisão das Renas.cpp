#include <iostream>
using namespace std;
int main(){
	int vetor[9];
	int numero, soma;
	soma = 0;
	for(int X = 0; X<9; X++){
		cin >> numero;
		vetor[X] = numero;
		soma += vetor[X];
	}
	
	if(soma%9 == 1 ){
		cout << "Dasher" << endl;
	}
	else{
		if(soma%9 == 2){
			cout << "Dancer" << endl;
		}
		else{
			if(soma%9 == 3){
				cout << "Prancer" << endl;
				}
				else{
					if(soma%9 == 4){
						cout << "Vixen" << endl;
						}	
						else{
						}
						if(soma%9 == 5){
							cout << "Comet" << endl;
							}
							else{
								if(soma%9 == 6){
									cout << "Cupid" << endl;
									}
									else{
										if(soma%9 == 7){
											cout << "Donner" << endl;
											}
											else{
												if(soma%9 == 8){
													cout << "Blitzen" << endl;
												}
												else{
													if(soma%9 == 0){
														cout << "Rudolph" << endl;
													}
												}
											}
										}
									}
								}
							}
						}
					}
