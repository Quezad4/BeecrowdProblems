#include <iostream>
using namespace std;
int main(){
	int H, E, A, O, W, X, aux;
	cin >> H >> E >> A >> O >> W >> X;
	if((H+E+A)>O+W){
		cout << "Middle-earth is safe." << endl;
	}
	else{
		if((H+E+A)<O+W){
			aux = (H+E+A+X);
			if(aux>(O+W)){
				cout << "Middle-earth is safe." << endl;
			}
			else{
				cout << "Sauron has returned." << endl;
			}
		}
		
	}
}
