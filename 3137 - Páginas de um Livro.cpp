#include <iostream>
using namespace std;
int main(){
	int P, valortot;
	valortot = 0;
	cin >> P;
	for(int X = 1; X<P+1; X++){
		if(X/1000000 != 0 or X == 1000000){
			valortot = valortot +7;
		}
		else{
			if(X/100000 != 0 or X == 100000){
			valortot = valortot +6;
			}
			else{
				if(X/10000 != 0 or X == 10000){
				valortot = valortot +5;
				}
				else{
					if(X/1000 != 0 or X == 1000){
					valortot = valortot +4;
					}
					else{
						if(X/100 != 0 or X == 100){
						valortot = valortot +3;
						}
						else{
							if(X/10 != 0 or X == 10){
							valortot = valortot +2;
							}
							else{
								if(X/10 == 0 ){
									valortot = valortot +1;
								}
							}
						}
					}
				}
			}
		}
	}
	cout << valortot << endl;
}
