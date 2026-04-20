#include <iostream>
/* exercio ver se é maior ou menor do que 18 anos*/
using namespace std;
 
int main() {

    int idade;
    cout << "Digite um numero: ";
    cin >> idade;
    
    string paridade = (idade >= 18) ? " maior" : " menorr";
    
    cout << "sua idade e " << idade << " voce e" << paridade << endl;
    
    return 0;
}
