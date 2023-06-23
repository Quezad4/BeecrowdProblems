#include <iostream>
using namespace std;
int main(){
	int N;
	string str1, str2;
	cin >> N;
	for(int i = 0; i<N; i++){
		cin >> str1 >> str2;
		if(str1 != str2){
			cout << 1 << endl;
		}
		else{
			cout << str1 << endl;
		}
	
	}
}
