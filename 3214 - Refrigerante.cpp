#include <iostream>
using namespace std;
int main(){
	int E, F, C, bebido, rbebido, sobra;
	cin >> E >> F >> C;
	bebido = (E+F)/C;
	rbebido = (E+F)%C;
	sobra = bebido + rbebido;
	while(sobra>=C){
		bebido += sobra/C;
		sobra = sobra/C + sobra%C;
		
	}
	cout << bebido << endl;
}
