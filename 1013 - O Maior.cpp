#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int A, B, C, maiorAB, maiortot;
	cin >> A >> B >> C;
	maiorAB = (A+B+abs(A-B))/2;
	maiortot = ((maiorAB+C) + abs(maiorAB-C))/2;
	cout << maiortot << " eh o maior" << endl;
}
