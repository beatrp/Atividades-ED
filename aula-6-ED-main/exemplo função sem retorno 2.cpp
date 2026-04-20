#include <iostream>
 using namespace std;
 
 void dobrarPorReferencia(int &numero){
 	numero *=2;
 }
 
 int main () {
 	int valor = 5;
    dobrarPorReferencia (valor);
    
    cout << "O valor dobrado é: " << valor << endl;
    
    return 0;
 }
