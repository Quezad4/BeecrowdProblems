#include<iostream>
using namespace std;
int main(){
	int X, Y;
	cin >> X >> Y;
	if(X>Y){
		for(int Z = Y+1; Z+1<X; Z++){
			if(Z%5 == 2 or Z%5 == 3){
				cout << Z << endl;
			}
			
		}
	}
	else{
		if(Y>X){
			for(int Z = X+1; Z<Y; Z++ ){
				if(Z%5 == 2 or Z%5 == 3){
					cout << Z << endl;
				}
			}
		}
	}
}
