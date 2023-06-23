#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int n1,n2, N;
	string nome1, nome2, escolha1, escolha2;
	cin >> N;
	for(int X = 0; X<N; X++){
		cin >> nome1 >> escolha1 >> nome2 >> escolha2;
		cin >> n1 >> n2;
		if((n1+n2)%2 == 0){
			if(escolha1 == "PAR"){
				cout << nome1 << endl;
			}
			else{
				cout << nome2 << endl;
			}
		}
		else{
			if((n1+n2)%2 != 0){
				if(escolha1 == "IMPAR"){
					cout << nome1 << endl;
				}
				else{
					cout << nome2 << endl;
				}
			}
		}
	}
}
