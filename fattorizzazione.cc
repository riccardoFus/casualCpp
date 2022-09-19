#include <iostream>
using namespace std;

void factorize(long long int n){
    int divisore = 2;
    while(n!=1){
        if(n%divisore==0){
            cout << divisore << " ";
            n = n/divisore;
            divisore = 2;
        }else{
            divisore++;
        }
    }
}

int main(){
    factorize(1805451246);
    return 0;
}