// Declare um array de caracteres animais com 10 posições. 
// Armazene manualmente os nomes de 10 animais nas posições do array. 
// Leia um caractere do usuário usando cin. 
// Verifique se o caractere é a primeira letra de um animal do array. Se for, imprima o nome do animal completo.

#include <iostream>

using namespace std;

int main(){
    string animais[10], caracter;
    int len = sizeof(animais) /sizeof(animais[0]);
    int found;

    cout << "Preencha o Array com nomes de animais:" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao "<< i << ": "; 
        cin >> animais[i];
    }
    cout << "Entre com um caracter: ";
    cin >> caracter;
    cout << endl;
    for(int i =0; i < len; i++){
        found = animais[i].find(caracter);
        if(found == 0){
            cout << "Posicao "<< i << ": " << animais[i] << endl;
        }
    }
    return 0;
}