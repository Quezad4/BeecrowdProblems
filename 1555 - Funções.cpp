#include <iostream>
using namespace std;
int b(int a, int b){
    int resp = (2*(a*a))+((5*b)*(5*b));
    return resp;
}
int c(int a, int b){
    int resp = (-100*(a))+(b*b*b);
    return resp;
}
int r(int a, int b){
    int resp = ((3*a)*(3*a)) + (b*b);
    return resp;
}

int main(){
    int N; cin >> N;
    int x, y;
    for(int i = 0; i<N; i++){
        cin >> x >> y;
        if(r(x,y)> b(x,y) and r(x,y)> c(x,y)){
        cout << "Rafael ganhou" << endl;
		}
		if(b(x,y)> r(x,y) and b(x,y)> c(x,y)){
			cout << "Beto ganhou" << endl;
		}
		if(c(x,y)> b(x,y) and c(x,y)> r(x,y)){
			cout << "Carlos ganhou" << endl;
		}
        
    }
    
}
