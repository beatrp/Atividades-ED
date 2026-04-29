// ex 2 Jogo de carta distribuir
// jogador A: K, J, A, 10, 3, 7, A, J
// jogador B: 4, 4, 4, 10, A, A, 4, J
// no final os jogadores tiveram essas cartas:
// jogador A: J, J, A, A
// jogador B: 4, 4, 4, 4
#include <iostream>
#include <stack>

using namespace std;

int main() {
stack pilhaA;
stack pilhaB;

// Cartas do jogador A (K, J, A, 10, 3, 7, A, J)  
pilhaA.push(13); // K  
pilhaA.push(11); // J  
pilhaA.push(14); // A  
pilhaA.push(10);  
pilhaA.push(3);  
pilhaA.push(7);  
pilhaA.push(14); // A  
pilhaA.push(11); // J  

// Cartas do jogador B (4, 4, 4, 10, A, A, 4, J)  
pilhaB.push(4);  
pilhaB.push(4);  
pilhaB.push(4);  
pilhaB.push(10);  
pilhaB.push(14); // A  
pilhaB.push(14); // A  
pilhaB.push(4);  
pilhaB.push(11); // J  

// Pilhas finais  
stack<int> finalA;  
stack<int> finalB;  

// Simulação simples (filtrando cartas desejadas)  
while (!pilhaA.empty()) {  
    int carta = pilhaA.top();  
    pilhaA.pop();  

    if (carta == 11 || carta == 14) { // J ou A  
        finalA.push(carta);  
    }  
}  

while (!pilhaB.empty()) {  
    int carta = pilhaB.top();  
    pilhaB.pop();  

    if (carta == 4) {  
        finalB.push(carta);  
    }  
}  

// Mostrar resultado final jogador A  
cout << "Jogador A final: ";  
while (!finalA.empty()) {  
    cout << finalA.top() << " ";  
    finalA.pop();  
}  

cout << endl;  

// Mostrar resultado final jogador B  
cout << "Jogador B final: ";  
while (!finalB.empty()) {  
    cout << finalB.top() << " ";  
    finalB.pop();  
}  

return 0;  
}
