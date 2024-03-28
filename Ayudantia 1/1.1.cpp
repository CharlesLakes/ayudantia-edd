#include <iostream>

using namespace std;

int main(){
    int x; 
    cin >> x;

    int respuesta = x/5;
    if(x % 5 != 0){
        respuesta++;
    }
    
    cout << respuesta << endl;

    return 0;
}