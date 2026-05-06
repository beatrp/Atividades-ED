#include <iostream>
using namespace std;
void regressiva (int i) {
	cout << i << endl;
	if (i <= 0) {
		return;
	}
	else{
		regressiva ( i - 1);
	}
}
int main (){
	regressiva (10);
	return 0;
}
