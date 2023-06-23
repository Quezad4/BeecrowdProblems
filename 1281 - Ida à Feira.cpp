#include <iostream>
#include<map>
using namespace std;
int main(){
	int N, M,P,multp;
	float preco, conta = 0;
	string fruta, fruta2;
	cin >> N;
	for(int i = 0; i<N; i++){
		map<string,float>precos;
		cin >> M;
		for(int i = 0; i<M; i++){
			cin >> fruta >> preco;
			precos.insert(make_pair(fruta,preco));
		}
		cin >> P;
		for(int i = 0; i<P; i++){
			cin >> fruta2 >> multp;
			conta += precos[fruta2]*multp;
		}
		cout << fixed;
		cout.precision(2);
		cout << "R$ " << conta << endl;
		conta = 0;
	}
}
