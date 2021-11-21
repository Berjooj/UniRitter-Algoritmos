/* Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e
cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos
anos ser�o necess�rios para que Z� seja maior que Chico */

#include <iostream>

using namespace std;

int main () {
	
	float chico = 1.50;
	float ze = 1.10;
	int anos = 0;
	
	while (chico != ze) {
		chico += 0.02;
		ze += 0.03;
		anos ++;
	}
	
	cout << "Levara " << anos << " para ambos terem a mesma altura" << endl;
	
	return 0;
}
