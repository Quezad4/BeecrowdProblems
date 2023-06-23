#include <iostream>
using namespace std;
int main(){
    float X;
    int count = 0, N;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> X;
        while(X>1){
            X/=2;
            count ++;
        }
        cout << count<< " dias" << endl;
        count = 0;
    }
}
