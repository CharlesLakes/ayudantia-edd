#include <iostream>

using namespace std;

struct vector{
    int x,y;
};

int producto_punto(vector v1, vector v2){
    return v1.x*v2.x + v1.y*v2.y;
}

bool verificar_perpendicular(vector v1, vector v2){
    int p = producto_punto(v1,v2);
    if(p == 0){
        return true;
    }
    return false;
}

int main(){
    vector v1,v2;
    v1.x = 2;
    v1.y = 2;

    v2.x = 0;
    v2.y = 2;
    if(verificar_perpendicular(v1,v2)){
        cout << "SI" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}