/* Desenvolva um gerador de tabuada, UTILIZANDO WHILE, capaz de gerar a tabuada de
qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele
deseja ver a tabuada. O programa deve executar até o usuario digitar zero. Caso o
usuario solicite tabuada > 10 ou < 1informar que o programa não atende esta
requisição */

#include <iostream>

using namespace std;

int main () {
	int n;
	
	while (cin >> n && n != 0) {
		if (n > 10 || n < 1) {
			cout << "Valor invalido! Tente novamente" << endl;
			continue;
		}
		for (int i = 1; i <= 10; i++) {
			cout << n << " * " << i << " = " << n*i << endl;
		}
	}
	
	return 0;
}
