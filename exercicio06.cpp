// Declare um array de caracteres numeros com 10 posições. 
// Armazene manualmente os números de 1 a 10 nas posições do array. 
// Imprima os números pares do array em linhas separadas usando cout.

#include <iostream>

using namespace std;

int main(){
    int numeros[10];
    int len = sizeof(numeros) /sizeof(numeros[0]);

    cout << "Preencha o Array" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao " << i << ": ";
        cin >> numeros[i];
    }
    cout << endl;
    for(int i =0; i < len; i++){
        if(numeros[i] % 2 == 0){
            cout << "Par na Posicao " << i << ": " << numeros[i] << endl;
        }
    }
    return 0;
}