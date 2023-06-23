#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int matriz[2][100];
int error(){
	for(int i = 0; i<100; i++){
		if(matriz[0][i] != matriz[1][i]){
			if( matriz[0][i] == 1 and matriz[1][i] == 0){
				return 2;
			}
			else if(matriz[0][i] == 0 and matriz[1][i] == 1) {
				return 1;
			}
		}
	}
	return 0;

}
int main(){
    int t; cin>> t;
    cin.ignore();
    for(int  i = 0; i<t; i++){
		memset(matriz,0,sizeof(matriz));
        int count1 = 0, count2 = 0;
		string palavra, time1, time2;
        getline(cin,palavra);
        getline(cin,time1);
        getline(cin,time2);
        
        for(int j = 0; j<palavra.size(); j++){
            if(palavra[j] == time1[j]){
                count1++;
                matriz[0][j] = 1;
            }
        }
        for(int j = 0; j<palavra.size(); j++){
            if(palavra[j] == time2[j]){
                count2++;
                matriz[1][j] = 1;
			}
        }
        cout << "Instancia " << i+1 << endl;
        if(count1 > count2){
            cout << "time 1" << endl;
           // cout << count1 << "======" << count2 << endl;
        }
        if(count2 > count1){
            cout << "time 2" << endl;
           // cout << count1 <<"======" << count2 << endl;
        }
        if(count2 == count1){
            if(error() == 2){
				cout << "time 1" << endl;
				//cout << count1 << "======" << count2 << endl;
			}
			if(error() == 1){
				cout << "time 2" << endl;
				//cout << count1<< "======" << count2 << endl;
			}
			if(error() == 0){
				cout << "empate" << endl;
				//cout << count1 << "======" << count2 << endl;
			}
			
        }
        cout << endl;
	}
	
	
}
