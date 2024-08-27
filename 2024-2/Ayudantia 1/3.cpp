#include <iostream>

using namespace std;

struct Vector{
    int x,y;
};

bool verificar_perpendicular(Vector a, Vector b){
    int producto_punto = a.x*b.x + a.y*b.y;
    if(!producto_punto){
        return true;
    }
    return false;
}

int main(){
    Vector a,b;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;

    
    if(verificar_perpendicular(a,b))
        cout << "Si" << endl;
    else cout << "No" << endl;

    return 0;
}