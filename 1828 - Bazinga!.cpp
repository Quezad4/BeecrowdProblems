#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int N, X;
	string palavra1, palavra2;
	X = 0;
	cin >> N;
	while(X < N){
		cin >> palavra1 >> palavra2;
		X++;
		if(palavra1 == "papel" and palavra2 == "pedra"){
			cout << "Caso #" << X << ": Bazinga!" << endl;
		}
		else{
			if(palavra1 == "tesoura" and palavra2 == "papel"){
				cout << "Caso #" << X << ": Bazinga!" << endl;
			}
			else{
				if(palavra1 == "pedra" and palavra2 == "lagarto"){
					cout << "Caso #" << X << ": Bazinga!" << endl;
				}
				else{
					if(palavra1 == "lagarto" and palavra2 == "Spock"){
						cout << "Caso #" << X << ": Bazinga!" << endl;
					}
					else{
						if(palavra1 == "Spock" and palavra2 == "tesoura"){
							cout << "Caso #" << X << ": Bazinga!" << endl;
						}
						else{
							if(palavra1 == "tesoura" and palavra2 == "lagarto"){
								cout << "Caso #" << X << ": Bazinga!" << endl;
							}
							else{
								if(palavra1 == "lagarto" and palavra2 == "papel"){
									cout << "Caso #" << X << ": Bazinga!" << endl;
								}
								else{
									if(palavra1 == "papel" and palavra2 == "Spock"){
										cout << "Caso #" << X << ": Bazinga!" << endl;
									}
									else{
										if(palavra1 == "Spock" and palavra2 == "pedra"){
											cout << "Caso #" << X << ": Bazinga!" << endl;
										}
										else{
											if(palavra1 == "pedra" and palavra2 == "tesoura"){
												cout << "Caso #" << X << ": Bazinga!" << endl;
											}
											else{
												if(palavra1 == palavra2){
													cout << "Caso #" << X << ": De novo!" << endl;
												}
												else{
													cout << "Caso #" << X << ": Raj trapaceou!" << endl;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		
	}
	
}
