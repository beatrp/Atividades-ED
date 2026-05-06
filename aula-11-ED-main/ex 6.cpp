#include <iostream>
using namespace std;

int soma_recursiva (int n) {
	if (n == 0){
		return 0;
	}
	else {
		return n + soma_recursiva (n -1 );
	}
}
int main () {
	cout << soma_recursiva(5) << endl;
	return 0;
}
