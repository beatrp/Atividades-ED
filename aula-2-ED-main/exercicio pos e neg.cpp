#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Digite um número: ";
	cin >> num;
	
	if (num > 0) {
		cout << "O número inserido é positivo." << endl;
	} else if (num < 0) {
		cout << "O número inserido é negativo." << endl;
	} else {
		cout << "O número inserido é zero." << endl;
}
	
	return 0;
} 

