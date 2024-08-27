#include <iostream>

using namespace std;



int main(){
    char S[65000];

    int n; 
    cin >> n;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        cin >> S[i];
        int digito = S[i] - '0';
        if(digito % 2 == 0){
            ans += i + 1;
        }
    }
    cout << ans << endl;


    

    return 0;
}