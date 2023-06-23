#include<iostream>
#include <vector>
using namespace std;
int main(){
	int N, count = 0, dimas = 0, a, assunto = 0;
	string A;
	vector<char>dima;
	vector<char>::iterator it;
	cin >> A;
	for(int i = 0; i<A.size(); i++){
		dima.push_back(A[i]);
	}
	for(int i = 0; i<dima.size(); i ++){
		if(dima[i] == '('){
			count ++;
			a = i;
		}
		if(dima[i] == ')' and count >= 1){
			count = 0;
			dima.erase(dima.begin() + a);
			dima.erase(dima.begin() + a);
			i = -1;
		}
	}
	for(it = dima.begin(); it != dima.end(); it++){
		if(*it == '('){
			assunto++;
		}
	}
	if(assunto > 0){
		cout << "Ainda temos " << assunto << " assunto(s) pendente(s)!" << endl;
	}
	else{
		cout << "Partiu RU!" << endl;
	}
}
