#include <iostream>
using namespace std;
 
int main() {
    int diaSemana;
    cout << "Digite o numero da semana (1 a 7): ";
    cin >> diaSemana;
    
    switch (diaSemana){
    	case 1:
    		cout <<"domingo" << endl;
    		break;
    	case 2:
    		cout <<"segunda-feira" << endl;
    		break;
    	case 3:
    		cout <<"terca-feira" << endl;
    		break;
    	case 4:
    		cout <<"quarta-feira" << endl;
    		break;
    	case 5:
    		cout <<"quinta-feira" << endl;
    		break;
    	case 6:
    		cout <<"sexta-feira" << endl;
    		break;
    	case 7:
    		cout <<"sabado" << endl;
    		break;
    	default:
    		cout <<"dia invalido!" << endl;
	}
	
	return 0;
}
