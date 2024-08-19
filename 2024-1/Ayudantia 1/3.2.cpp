#include <iostream>

using namespace std;

struct vector{
    int x,y;
};

int producto_punto(vector v1, vector v2){
    return v1.x*v2.x + v1.y*v2.y;
}

int main(){
    vector v1,v2;
    v1.x = 2;
    v1.y = 2;

    v2.x = -1;
    v2.y = -2;
    cout << producto_punto(v1,v2) << endl; 

    return 0;
}