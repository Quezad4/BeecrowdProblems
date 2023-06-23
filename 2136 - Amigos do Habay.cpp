#include <iostream>
#include <set>
#include <string.h>
#include<vector>
using namespace std;
int main(){
	set<string>lista;
	set<string>lista2;
	vector<string>insc;
	string nome, yon, a, nomemaior, nomemaior2;
	int maior = 0;
	set<string>::iterator it;
	vector<string>::iterator ita;
	while(cin>>nome,nome != "FIM"){
		cin >> yon;
		if(yon == "YES"){
			lista.insert(nome);
			insc.push_back(nome);
		}
		else{
			lista2.insert(nome);
		}
	}
	for(it = lista.begin(); it != lista.end(); it++){
		a = *it;
		if(a.size() > maior){
			maior = a.size();
			nomemaior = *it;
		}
		cout << *it << endl;
	}
	lista.erase(nomemaior);
	maior = 0;
	for(it = lista.begin(); it != lista.end(); it++){
		a = *it;
		if(a.size() > maior){
			maior = a.size();
			nomemaior2 = *it;
		}
	}
	for(it = lista2.begin(); it != lista2.end(); it++){	
	cout << *it << endl;
	}
	
	if(nomemaior.size() == nomemaior2.size()){
		cout << endl;
		cout << "Amigo do Habay:" << endl;
		for(ita = insc.begin(); ita != insc.end(); ita++){
			a = *ita;
			if(a.size() == nomemaior.size()){
				cout << *ita << endl;
				break;
			}
		}
	}
	else{
		cout << endl;
		cout << "Amigo do Habay:" << endl;
		cout << nomemaior << endl;
	}
}
