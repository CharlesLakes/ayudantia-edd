#include <iostream>

using namespace std;

int main(){
    int n,m,a;
    cin >> n >> m >> a;
    long long mf;
    if(m % a == 0){
        mf = m/a;
    }else{
        mf = m/a + 1;
    }

    long long mc;
    if(n % a == 0){
        mc = n/a;
    }else{
        mc = n/a + 1;
    }
    long long ans = mf*mc;
    cout << ans << endl;


    return 0;
}