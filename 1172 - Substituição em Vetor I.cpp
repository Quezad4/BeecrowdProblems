#include <iostream>
using namespace std;
int main(){
	int V;
	int vetorx[10];
	for(int X = 0; X<10; X++){
		cin >> V;
		if(V<=0){
			vetorx[X] = 1;
		}
		else{
			vetorx[X] = V;
		}
		cout <<"X[" << X << "] = " << vetorx[X] << endl;
	}
}
