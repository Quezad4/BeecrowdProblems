#include <iostream>
using namespace std;
int main(){
double valorn;
valorn = 1;
for(double X = 1; X < 100; X++){
	valorn += 1/(X+1);
}
cout << fixed;
cout.precision(2);
 cout << valorn << endl;
}
