#include <iostream>
#include <list>
#include <string>
#include <windows.h>

using namespace std;

class Fila {
public:
    Fila() {}

    void enfileirar(string elemento) {
        lista.push_back(elemento);
    }

    string desenfileirar() {
        if (lista.empty()) {
            return "Fila vazia";
        }

        string elemento = lista.front();
        lista.pop_front();
        return elemento;
    }

    bool vazia() {
        return lista.empty();
    }

    void mostrarElementosFila() {
        for (auto i : lista) {
            cout << "Elemento: " << i << endl;
        }
    }

private:
    list<string> lista;
};

int main() {

    Fila fila;

    // fila inicial
    fila.enfileirar("joao");
    fila.enfileirar("jose");
    fila.enfileirar("maria");
    fila.enfileirar("lucia");
    fila.enfileirar("fatima");
    fila.enfileirar("sabrina carpenter");
    fila.enfileirar("hello kitty");
    fila.enfileirar("esnupi");
    fila.enfileirar("manoel");

    cout << "Fila inicial:\n";
    fila.mostrarElementosFila();

    Sleep(1000);

    // 5 receberam
    fila.desenfileirar();
    fila.desenfileirar();
    fila.desenfileirar();
    fila.desenfileirar();
    fila.desenfileirar();

    // 4 chegaram
    fila.enfileirar("pedro");
    fila.enfileirar("eulalia");
    fila.enfileirar("marcia");
    fila.enfileirar("agenor");

    cout << "\nFila Atualizada:\n";
    fila.mostrarElementosFila();

    return 0;
}c
