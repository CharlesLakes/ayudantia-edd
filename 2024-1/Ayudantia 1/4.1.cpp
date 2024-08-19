#include <iostream>

using namespace std;

bool es_par(int x){
    if(x == 0){
        return true;
    }
    if(es_par(x - 1) == false)
        return true;
    return false;
}

int main(){
    if(es_par(12)){
        cout << "Es par" << endl;
    }else{
        cout << "No es par" << endl;
    }


    return 0;
}