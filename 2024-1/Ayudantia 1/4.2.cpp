#include <iostream>

using namespace std;

int minimos_pasos(int n){
    // Caso base
    if(n == 0){
        return 0;
    }

    int minimo = 100000000;
    int copia = n;
    while(copia > 0){
        int digito = copia % 10;
        if(digito != 0){
            int respuesta = 1 + minimos_pasos(n - digito);
            if(minimo > respuesta){
                minimo = respuesta;
            }
        }
        copia /= 10;
    }
    return minimo;
}

int main(){
    cout << minimos_pasos(27) << endl;

    return 0;
}