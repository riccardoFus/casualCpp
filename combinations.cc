#include <iostream>
using namespace std;

int main(){
    int v[] = {1, 2, 3, 4};
    for(int i = 0; i < 4; i++){
        for(int j = i; j < 4; j++){
            cout << "{" << v[i] << ", " << v[j] <<"} ";
        }
    }
    return 0;
}