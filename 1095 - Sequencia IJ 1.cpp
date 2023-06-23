#include <iostream>
using namespace std;
int main(){
	int i, j;
	i = 1;
	j = 60;
	for(int X = 1; X<=13; X++){
		cout << "I=" << i << " J=" << j << endl;
		i = i+3;
		j = j-5;
	}
}
