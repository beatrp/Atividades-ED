#include <iostream>
using namespace std;

void imprimir_recursivamente(int n) {
    if (n == 0){
        return;
    } else {
        cout << "recursao" << endl;
        imprimir_recursivamente(n - 1);
    }
}

int main () {
    imprimir_recursivamente(5);
    return 0;
}
