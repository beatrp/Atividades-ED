#include <iostream>
using namespace std;

int soma_for (int n) {
	int soma = 0;
	for (int i = 0; i <=n; i++) {
		soma+= i;
	}
	return soma;
}

int main () {
	cout << soma_for(5) << endl;
	return 0;
}
