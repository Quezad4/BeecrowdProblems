#include <iostream>
using namespace std;
int main(){
	int A;
	int B;
	int C;
	int D;
	cin >> A >> B >> C >> D;
	if (B>C and D>A and C+D>A+B and C>0 and D>0 and A%2 == 0){
		cout << "Valores aceitos" << endl;
	}
	else {
		cout << "Valores nao aceitos" << endl;
	}
		
}
