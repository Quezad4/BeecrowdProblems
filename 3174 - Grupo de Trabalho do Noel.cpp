#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int N, H, totboneco, totarq, totmus, totdesen, W, X, Y, Z;
	string E, G;
	H = 0;
	cin >> N;
	totboneco = 0;
	totarq = 0;
	totmus = 0;
	totdesen = 0;
	for(int X = 0; X<N; X++){
		cin >> E >> G >> H;
		if(G == "bonecos"){
			totboneco += H;
		}
		else{
			if(G == "arquitetos"){
				totarq += H;
			}
			else{
				if(G == "musicos"){
					totmus += H;
				}
				else{
					if(G == "desenhistas")
					totdesen += H;
				}
			}
		}
		
	}
	W = 0;
	X = 0;
	Y = 0;
	Z = 0;
	W = totboneco/8;
	X = totarq/4;
	Y = totmus/6;
	Z = totdesen/12;
	cout << W+X+Y+Z << endl;
}
