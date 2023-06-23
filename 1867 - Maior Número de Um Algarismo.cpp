#include <iostream>
using namespace std;


int soma(string a){
	int soma = 0;
	if(a.size()==1) return int(a[0]-'0');
	while(a.size() > 1){
		soma=0;
		for(int i = 0; i<(int)a.size(); i++){
			soma += a[i] - '0';	
		}
		a = to_string(soma);
	}
	return soma;
}



int main(){
	string str1, str2;
	cin >> str1 >> str2;
	while(str1 != "0" or str2 != "0"){
		int a =soma(str1);
		int b = soma(str2);
		//~ cout << a << " " << b << endl;
		if(a > b) cout << 1 << endl;
		if(a == b) cout << 0 << endl;
		if(a < b) cout << 2 << endl;
		cin >> str1 >> str2;
	}
}
