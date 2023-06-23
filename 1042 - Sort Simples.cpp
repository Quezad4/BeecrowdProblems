#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if( a>b and a>c and b>c){
	cout << c << endl;
	cout << b << endl;
	cout << a << endl;
	cout << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	}
	else{
		if( a>b and a>c and c>b){
			cout << b << endl;
			cout << c << endl;
			cout << a << endl;
			cout << endl;
			cout << a << endl;
			cout << b << endl;
			cout << c << endl;	 
		}
		else{
			if(b>a and b>c and a>c ){
				cout << c << endl;
				cout << a << endl;
				cout << b << endl;
				cout << endl;
				cout << a << endl;
				cout << b << endl;
				cout << c << endl;
			}
			else{
				if(b>a and b>c and c>a){
					cout << a << endl;
					cout << c << endl;
					cout << b << endl;
					cout << endl;
					cout << a << endl;
					cout << b << endl;
					cout << c << endl;
				}
				else{
					if(c>a and c>b and a>b){
						cout << b << endl;
						cout << a << endl;
						cout << c << endl;
						cout << endl;
						cout << a << endl;
						cout << b << endl;
						cout << c << endl;
					}
					else{
						cout << a << endl;
						cout << b << endl;
						cout << c << endl;
						cout << endl;
						cout << a << endl;
						cout << b << endl;
						cout << c << endl;
					}
				}
			}
		}
	}
}
