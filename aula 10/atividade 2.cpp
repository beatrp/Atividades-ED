#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Pilha do Jogador A
    stack<string> ja;
    ja.push("A");
    ja.push("A");
    ja.push("J");
    ja.push("J");

    // Pilha do Jogador B
    stack<string> jb;
    jb.push("4");
    jb.push("4");
    jb.push("4");
    jb.push("4");

    // Mostrando o topo de cada pilha como exemplo
    cout << "Topo de JA: " << ja.top() << endl; // Saída: J
    cout << "Topo de JB: " << jb.top() << endl; // Saída: 4

    return 0;
}
