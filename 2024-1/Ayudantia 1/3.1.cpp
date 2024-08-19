#include <iostream>

using namespace std;

struct vector{
    int x,y;
};


int main(){
    int x,y;
    cin >> x;
    cin >> y;

    vector v;
    v.x = x;
    v.y = y;
    cout <<"Valor " << v.x << " " << v.y << endl;
    cout << "Dir: " << &v << endl;

    return 0;
}