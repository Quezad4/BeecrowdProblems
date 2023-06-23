#include <iostream>
using namespace std;
int main(){
	int N, Y, Z;
	cin >> N;
	for(int X = 0; X<N; X++){
		cin >> Y >> Z;
		if(Y+Z == 0 ){
			cout << "PROXYCITY" << endl;
		}
		else{
			if(Y+Z == 1 ){
				cout << "P.Y.N.G." << endl;
			}
			else{
				if(Y+Z == 2 ){
					cout << "DNSUEY!" << endl;
				}
				else{
					if(Y+Z == 3 ){
						cout << "SERVERS" << endl;
					}
					else{
						if(Y+Z == 4 ){
							cout << "HOST!" << endl;
						}
						else{
							if(Y+Z == 5 ){
								cout << "CRIPTONIZE" << endl;
							}
							else{
								if(Y+Z == 6 ){
									cout << "OFFLINE DAY" << endl;
								}
								else{
									if(Y+Z == 7 ){
										cout << "SALT" << endl;
									}
									else{
										if(Y+Z == 8 ){
											cout << "ANSWER!" << endl;
										}
										else{
											if(Y+Z == 9 ){
												cout << "RAR?" << endl;
											}
											else{
												cout << "WIFI ANTENNAS" << endl;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
