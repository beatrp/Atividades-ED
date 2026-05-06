#include <iostream>
using namespace std;

void imprimir_sequencia (int n) {
	
	if (n == 0) {
		return;
	}
	else{
		cout << n << endl;
		imprimir_sequencia (n - 1);
	}
}
int main (){
	imprimir_sequencia (5);
	return 0;
}
