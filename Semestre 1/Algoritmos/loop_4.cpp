/* Fa�a um programa que leia um nome de usu�rio e a sua senha e n�o aceite a senha
igual ao nome do usu�rio, mostrando uma mensagem de erro e voltando a pedir as
informa��es. */

#include <iostream>
#include<string>

using namespace std;

int main () {
	string nome;
	string senha;
	
	while (getline(cin, nome) && getline(cin, senha)) {
		if (nome.compare(senha))
			break;
		cout << "Digite um nome e senha diferentes!" << endl;
	}
	
	return 0;	
}
