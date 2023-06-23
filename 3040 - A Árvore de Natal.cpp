#include <iostream>
using namespace std;
int main(){
	int N, h, d, g;
	cin >> N;
	for(int X = 0; X<N; X++){
		cin >> h >> d >> g;
		if(h>=200 and h <=300 and d>=50 and g>=150){
			cout << "Sim" << endl;
		}
		else{
			cout << "Nao" << endl;
		}
	}
}
