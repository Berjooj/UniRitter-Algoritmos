/* Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha
igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as
informações. */

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
