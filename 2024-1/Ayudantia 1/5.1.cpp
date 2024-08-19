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

vector* filtro(vector *vectores,int &n,vector v){
    int contar = 0;
    for(int i = 0; i < n; i++){
        if(!verificar_perpendicular(vectores[i],v)){
            contar++;
        }
    }

    vector *resultado = new vector[contar];
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(!verificar_perpendicular(vectores[i],v)){
            resultado[pos] = vectores[i];
            pos++;
        }
    }

    n = contar;
    delete[] vectores;

    return resultado;
}

int main(){
    int n;
    vector *vectores; 
    vector v;

    cin >> n;
    vectores = new vector[n];
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x;
        cin >> y;
        vectores[i].x = x;
        vectores[i].y = y;
    }

    cin >> v.x;
    cin >> v.y;
    cout << "Anterior n: " << n << endl;
    vectores = filtro(vectores,n,v);
    cout << "Nuevo n: " << n << endl;

    for(int i = 0; i < n; i++){
        cout << vectores[i].x << " " << vectores[i].y << endl;
    }

    delete[] vectores;

    return 0;
}