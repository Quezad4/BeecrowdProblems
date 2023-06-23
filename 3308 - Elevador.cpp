#include <iostream>
using namespace std;
int main(){
	int N, M, count = 0, andar;
	cin >> N;
	for(int i = 0; i<N; i++){
		int vetorandar[3];
		cin >> M;
		for(int j = 0; j<3; j++){
			cin >> andar;
			vetorandar[j] = andar;
		}
		for(int k = 0; k<3; k++){
			if(vetorandar[k] == 1){
				count ++ ;
			}
		}
		if(M == 0 && count == 1){
			cout << "1" << endl;
		}
		if(M == 0 and count == 0){
			cout << "0" << endl;
		}
		if(count> 1){
			cout << "X" << endl;
		}
		if(M == 1 && count == 1){
			cout << "0" << endl;
		}
		count = 0;
	}
}
