#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    int p, matriz[3][3], matrizd[3][3];
    
    cin >> p;
    
    for(int x = 0; x < p; x++){
        
        
        for(int i = 0; i < 3; i++){
            
            for(int j = 0; j < 3; j++){
                
                cin >> matriz[i][j];
            }
        }
        
        
        for(int i = 0; i < 3; i++){
            
            for(int j = 0; j < 3; j++){
                
                if(j == 0){
                    matrizd[i][j] = abs(matriz[i][j] - matriz[i][j + 1]);
                }
                else{
                    matrizd[i][j] = abs(matriz[i][j] - matriz[i][j - 1]);
                }
            }
        }
        // certo
        int contd = 0, maiord = 0,rep;
        
        for(int i = 0; i < 3; i++){
            
            for(int j = 0; j < 3; j++){
                
                for(int k = 0; k < 3; k++){
                    
                    for(int l = j + 1; l < 3; l++){
                        
                        if(matrizd[i][j] == matrizd[k][l]){
                            
                            contd++;
                        }
                    }
                }
                
                if(contd > maiord){
                    
                    maiord = contd;
                    rep = matrizd[i][j];
                }
                contd = 0;
            }
        }
        
        
        int d1, d2;
        
        vector<int> v;
        
        for(int i = 0; i < 3; i++){
            
            for(int j = 0; j < 3; j++){
                
                if(j == 0){
                    
                    d1 = abs(matriz[i][j] - matriz[i][j + 1]);
                    d2 = abs(matriz[i][j] - matriz[i][j + 2]);
                    
                    
                    if( d1 != rep and d2 != rep){
                        v.push_back(matriz[i][j]);
                    }
                }
                else{
                    
                    if(j == 1){
                        
                        d1 = abs(matriz[i][j] - matriz[i][j - 1]);
                        d2 = abs(matriz[i][j] - matriz[i][j + 1]);
                        
                        
                        if(d1 != rep and d2 != rep){
                            v.push_back(matriz[i][j]);
                        }
                        
                    }
                    
                    else{
                        
                        d1 = abs(matriz[i][j] - matriz[i][j - 2]);
                        d2 = abs(matriz[i][j] - matriz[i][j - 1]);
                        
                        
                        if(d1 != rep and d2 != rep){
                            v.push_back(matriz[i][j]);
                            
                        }
                    }
                }
            }
        }
        
        cout << "Possiveis maletas: ";
        
        for(int i = 0; i <(int) v.size(); i++){
            if(i != v.size() -1){
                cout << v[i] << ", ";
            }
            else{
                cout << v[i] << ";" << endl;
            }
        }
    }
}
