#include <iostream>
#include <string.h>
using namespace std;
int main (){
	string n1, n2, n3;
	cin >> n1 >> n2>> n3;
	if(n1 == "vertebrado" and n2 == "ave" and n3 == "carnivoro"){
		cout << "aguia" << endl;
	}
	else{
		if(n1 == "vertebrado" and n2 == "ave" and n3 == "onivoro"){
		cout << "pomba" << endl;
	}
		else{
			if(n1 == "vertebrado" and n2 == "mamifero" and n3 == "onivoro"){
				cout << "homem" << endl;
			}
			else{
				if(n1 == "vertebrado" and n2 == "mamifero" and n3 == "herbivoro"){
					cout << "vaca" << endl;
				}
				else{
					if(n1 == "invertebrado" and n2 == "inseto" and n3 == "hematofago"){
					cout << "pulga" <<endl;
					}
					else{
						if(n1 == "invertebrado" and n2 == "inseto" and n3 == "herbivoro"){
							cout << "lagarta" << endl;
						}
						else{
							if(n1 == "invertebrado" and n2 == "anelideo" and n3 == "hematofago"){
								cout << "sanguessuga" << endl;
							}
							else{
								cout << "minhoca" << endl;
							}
						}
					}
				}
			}
		}
	}
}
