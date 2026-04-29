#include <iostream>
#include <stack>
using namespace std;

void exibirPilha(stack<int>s) {
	cout << "conteudo da pilha (topo -> base): " << endl;
	while(!s.empty()) {
		cout << " | " << s.top() << " | " << endl;
		s.pop();	
	}
	cout << "----" << endl;
}
int main () {
	stack<int> pilha;
	
	pilha.push(1);
	pilha.push(2);
	pilha.push(3);
	
	pilha.pop();
	
	exibirPilha(pilha);
	
	return 0;
	
}




//cin pilha.top
