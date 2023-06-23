#include <iostream>
#include <map>
#include <algorithm> 
#include <vector>
using namespace std;
int main(){
	map<string,int>m;
	map<string,int>::iterator it;
	vector<string> v;
	string a, b;
	while(cin >> a >> b){
		v.push_back(b);
		if(m.count(a) == 0){
			m.insert(make_pair(a,1));
		}
		else{
			m[a]++;
		}
	}
	for(int i = 0; i<v.size(); i++){
		if(m.count(v[i]) >0){
			m.erase(v[i]);
		}
	}
	cout << "HALL OF MURDERERS"	<< endl;
	for(it = m.begin(); it!= m.end(); it++){
	cout << it->first << " " << it->second << endl;
	}
	
	
}
