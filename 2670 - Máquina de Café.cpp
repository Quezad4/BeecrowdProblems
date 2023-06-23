#include <iostream>
using namespace std;
int main(){
	int A, B, C, X, Y, Z;
	cin >> A >> B >> C;
	X = (B*2)+(C*4);
	Y = (A*2)+(C*2);
	Z = (A*4)+(B*2);
	if(X<Y and X<Z){
	cout << X << endl;
	}
	else{
		if(X<Y and X<Z){
			cout << X << endl;
		}
		else{
			if(Y<Z and Y<X){
				cout << Y << endl;
			}
			else{
				if(Y<Z and Y<X or X==Y){
					cout << Y << endl;
				}
				else{
					if(Z<Y and Z<X){
						cout << Z << endl;
					}
					else{
						cout << Z << endl;
					}
				}
			}
		}
	}
}
