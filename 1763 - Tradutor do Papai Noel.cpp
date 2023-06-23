#include<iostream>
#include<map>
using namespace std;
int main(){
	string N;
	map<string,string>paises;
	map<string,string>::iterator it;
	paises.insert(make_pair("brasil","Feliz Natal!"));
	paises.insert(make_pair("alemanha","Frohliche Weihnachten!"));
	paises.insert(make_pair("austria","Frohe Weihnacht!"));
	paises.insert(make_pair("coreia","Chuk Sung Tan!"));
	paises.insert(make_pair("espanha","Feliz Navidad!"));
	paises.insert(make_pair("grecia","Kala Christougena!"));
	paises.insert(make_pair("estados-unidos","Merry Christmas!"));
	paises.insert(make_pair("inglaterra","Merry Christmas!"));
	paises.insert(make_pair("australia", "Merry Christmas!"));
	paises.insert(make_pair("portugal","Feliz Natal!"));
	paises.insert(make_pair("suecia","God Jul!"));
	paises.insert(make_pair("turquia","Mutlu Noeller"));
	paises.insert(make_pair("argentina","Feliz Navidad!"));
	paises.insert(make_pair("chile", "Feliz Navidad!"));
	paises.insert(make_pair("mexico","Feliz Navidad!"));
	paises.insert(make_pair("antardida","Merry Christmas!"));
	paises.insert(make_pair("canada","Merry Christmas!"));
	paises.insert(make_pair("irlanda","Nollaig Shona Dhuit!"));
	paises.insert(make_pair("belgica","Zalig Kerstfeest!"));
	paises.insert(make_pair("italia","Buon Natale!"));
	paises.insert(make_pair("libia","Buon Natale!"));
	paises.insert(make_pair("siria","Milad Mubarak!"));
	paises.insert(make_pair("marrocos","Milad Mubarak!"));
	paises.insert(make_pair("japao","Merii Kurisumasu!"));
	while(cin >> N){
		it = paises.find(N);
		if(it == paises.end()){
			cout << "--- NOT FOUND ---" << endl;
		}
		else{
			cout << paises[N] << endl;
		}
	}
}
