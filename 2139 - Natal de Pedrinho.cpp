#include <iostream>
using namespace std;
int main(){
	int mes, dia, soma, diasp;
	while(cin >> mes){
		cin >> dia;
		if(mes == 1){
			diasp = dia ;
		}
		else{
			if(mes == 2){
				diasp = 31+dia;
			}
			else{
				if(mes == 3){
					diasp = 60+dia;
				}
				else{
					if(mes == 4){
						diasp = 91+dia;
					}
					else{
						if(mes == 5){
							diasp = 121+dia;
						}
						else{
							if(mes == 6){
								diasp = 152+dia;
							}
							else{
								if(mes == 7){
									diasp = 182+dia;
								}
								else{
									if(mes == 8){
										diasp = 213+dia;
									}
									else{
										if(mes ==9){
											diasp = 244+dia;
										}
										else{
											if(mes == 10){
												diasp = 274+dia;
											}
											else{
												if(mes == 11){
													diasp = 305+dia;
												}
												else{
													diasp = 335+dia;
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
		if(mes == 12 and dia == 24){
			cout << "E vespera de natal!" << endl;
		}
		else{
			if(mes == 12 and dia>25){
				cout << "Ja passou!" << endl;
			}
			else{
				if(mes == 12 and dia ==25){
					cout << "E natal!" << endl;
				}
				else{
					cout << "Faltam " << 360 - diasp << " dias para o natal!" << endl; 
				}
			}
		}
	}
}
