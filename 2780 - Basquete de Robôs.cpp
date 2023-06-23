#include <iostream>
using namespace std;
int main(){
	int D;
	cin >> D;
	if(D<=800){
		cout << "1" << endl;
	}
	else{
		if(D> 800 and D<=1400){
			cout << "2" << endl;
		}
		else{
			if(D> 1400 and D<=2000){
				cout << "3" << endl;	
			}
		}
	}
}
	
