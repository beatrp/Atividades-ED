#include <iostream>
 using namespace std;
 
 void lerEntradaUsuario (int &valor){
 	 cout << "Digite um numero: " ;
 	 cin >> valor;
 }
 
 int main () {
 	int numero;
    lerEntradaUsuario (numero);
    
    cout << "Você digitou: " << numero << endl;
    
    return 0;
 }
