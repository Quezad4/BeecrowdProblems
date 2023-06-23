#include <iostream>
using namespace std;
int main(){
	int gi, gg, G, vg, emp, vi;
	G = 0;
	vg = 0;
	emp = 0;
	vi = 0;
	for(int X = 0; X != 2; G++){
			if(X != 2){
			cin >> gi >> gg;
			cout << "Novo grenal (1-sim 2-nao)" << endl;
			cin >> X;
			if(gi>gg){
				vi ++;
			}
			else{
				if(gg>gi){
					vg ++;
				}
				else{
					if(gi == gg){
						emp ++;
					}
				}
			}
		}
		else{
			break;
		}
	}
	cout << G << " grenais" << endl;
	cout << "Inter:" << vi << endl;
	cout << "Gremio:" << vg <<endl;
	cout << "Empates:" << emp << endl;
	if(vi>vg){
		cout << "Inter venceu mais" << endl;
	}
	else{
		if(vg>vi){
			cout << "Gremio venceu mais" << endl;
		}
		else{
			if(vg == vi){
				cout << "Nao houve vencedor" << endl;
			}
		}
	}
}
