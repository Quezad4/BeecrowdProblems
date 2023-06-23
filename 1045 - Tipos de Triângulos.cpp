#include <iostream>
#include<math.h>
#include<stdlib.h>
int main(){
using namespace std;
double A, B, C, maiorab, maiortot, X;
cin >> A >> B >> C;
maiorab = ((A+B)+abs(A-B))/2;
maiortot = ((maiorab+C)+abs(maiorab-C))/2;
X = 0;
if(maiortot == A){
	if(A>= (B+C)){
		cout << "NAO FORMA TRIANGULO" << endl;
		X = 1;
	}
	else{
		if((A*A) == (B*B) + (C*C)and X!= 1){
			cout << "TRIANGULO RETANGULO" << endl;
		}
	}
	if((A*A)> (B*B)+ (C*C)and X!= 1){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	else{
		if(A*A<(B*B+C*C)){
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	}
	if(A == B and B == C and X!= 1){
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	else{
		if(A == B or B == C or C == A and X!= 1);
		cout << "TRIANGULO ISOSCELES" << endl;
	}
}
else{
	if(maiortot == B){
	if(B>= (A+C)){
		cout << "NAO FORMA TRIANGULO" << endl;
		X = 1;
	}
	else{
		if((B*B) == (A*A) + (C*C) and X!= 1) {
			cout << "TRIANGULO RETANGULO" << endl;
		}
	}
	if((B*B)> (A*A)+ (C*C) and X!= 1){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	else{
		if(B*B<(A*A+C*C)){
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	}
	if(A == B and B == C and B and X!= 1){
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	else{
		if(A == B or B == C or C == A and X!= 1){
		cout << "TRIANGULO ISOSCELES" << endl;		
		}
	}
	
}
else{
	if(maiortot == C){
	if(C>= (B+A)){
		cout << "NAO FORMA TRIANGULO" << endl;
		X = 1;
	}
	else{
		if((C*C) == (B*B) + (A*A) and X!= 1){
			cout << "TRIANGULO RETANGULO" << endl;
		}
	}
	if((C*C)> (B*B)+ (A*A) and X!= 1){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	else{
		if(C*C<(B*B+A*A))
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	if(A == B and B == C and X!= 1){
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	else{
		if(A == B or B == C or C == A and X!= 1){
		cout << "TRIANGULO ISOSCELES" << endl;
	}
	}

}}
}
}

