// Declare um array de caracteres frutas com 5 posições. 
// Armazene manualmente os nomes de 5 frutas nas posições do array. 
// Imprima a fruta que está na posição 3 do array usando cout.

#include <iostream>

using namespace std;

int main(){
    string frutas[5];
    int len = sizeof(frutas) /sizeof(frutas[0]);

    cout << "Preencha o Array com nomes de frutas:" << endl;
    for(int i =0; i < len; i++){
        cout << i+1 << "° Fruta: ";
        cin >> frutas[i];
    }
    cout << "Fruta armazenada na 3° Posicao: " + frutas[2] << endl;
    return 0;
}