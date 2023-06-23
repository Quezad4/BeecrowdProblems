#include <iostream>
using namespace std;
int main(){
	double N1;
	double N2;
	double N3;
	double N4;
	double media;
	double exame;
	double media2;
	cin >> N1 >> N2 >> N3 >> N4;
	media = (N1*2+N2*3+N3*4+N4)/10;
	cout << fixed;
	cout.precision(1);
	cout << "Media: " << media << endl;
	if( media>=7){
		cout << "Aluno aprovado." << endl; 
}
	else{
		if(media<5){
			cout << "Aluno reprovado." << endl;
			}
			else{
				if(media>=5.0 and media<6.9){
					cout << "Aluno em exame." << endl;
					cin >> exame;
					cout << "Nota do exame: " << exame << endl;
					media2 = (media+exame)/2;
					if (media2>=5){
						cout << "Aluno aprovado." << endl;
						cout << "Media final: " << media2 << endl;
					}
					else{
						cout << "Aluno reprovado." << endl;
						cout << "Media final: " << media2 << endl;
						
					}
					
					
				}
				
				}
			}
			
			
			

		
	}
	
	
	
