#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Digite um número: ";
	cin >> num;
	
	if (num >= 10 && num <= 28) {
		cout << "O número está no intervalo de 10 a 20." << endl;
	} else {
		cout << "O número está fora do intervalo de 10 a 20." << endl;
	}
	
	return 0;
}
