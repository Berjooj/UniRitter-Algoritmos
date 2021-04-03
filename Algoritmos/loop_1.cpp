/* Faça um algoritmo que leia uma série de dados numéricos e imprima o maior deles.
Considere que o valor 9999 é utilizado como instrução de saida.
Exemplo entrada: 1, 2, 3, 9999
Saída Esperada: Maior = 3. */

#include <iostream>

using namespace std;

int main() {
    int n;
    int max = -1;

    while (cin >> n && n != 9999) {
        if (n > max)
            max = n;
    }

    cout << "Maior = " << max << "." << endl;
    return 0;
}
