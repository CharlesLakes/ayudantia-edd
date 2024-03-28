#include <iostream>

using namespace std;

int max_subarray(int numeros[],int largo){
    int maximo = -1000000000; // -Infinito
    for(int i = 0; i < largo; i++){
        for(int j = i; j < largo; j++){
            int suma = 0;
            for(int k = i; k <= j; k++){
                suma = suma + numeros[k];
            }
            if(maximo < suma){
                maximo = suma;
            }
        }
    }
    return maximo;
}

int main(){
    int numeros[10];
    for(int i = 0; i < 10; i++){
        cin >> numeros[i];
    }

    cout << max_subarray(numeros,10) << endl;

    return 0;
}