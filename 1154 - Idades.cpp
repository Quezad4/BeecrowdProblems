#include <iostream>
using namespace std;
int main(){
	float N, valorn, Y;
	Y = -1;
	valorn = 0;
	for(int X = 1;;X++ ){
		Y++;
		cin >> N;
		if(N>0){
			valorn = valorn+N;
		}
		else{
			break;
		}
	}
	cout <<fixed;
	cout.precision(2);
	cout << valorn/Y << endl;
}
