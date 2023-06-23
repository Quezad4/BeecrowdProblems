#include <iostream>
using namespace std;

int fib(int x, int &count){
    count++;
    if(x == 0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    int resp = fib(x-1,count)+fib(x-2,count);
    return resp;
    
}


int main(){
    int N; cin >> N;
    int valor, c = 0;
    for(int i = 0; i<N; i++){
        cin >> valor;
        fib(valor,c);
        cout << "fib("<< valor <<") = " << c-1 << " calls = " << fib(valor,c) << endl;
        c = 0;
    }
}
