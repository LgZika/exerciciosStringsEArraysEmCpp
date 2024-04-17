// Declare um array de caracteres texto com 50 posições. 
// Leia um texto do usuário usando cin e armazene-o em texto. 
// Encontre a primeira ocorrência da letra 'a' no texto e imprima a posição da letra.

#include <iostream>

using namespace std;

int main(){
    char texto[50];
    int len = sizeof(texto) / sizeof(texto[0]);

    cout << "Insira uma frase: ";
    cin >> texto;

    for(int i = 0; i < len; i++){
        if(texto[i] == 'a' || texto[i] == 'A'){
            cout << "Letra A encontrada na posicao " << i << endl;
            return 1;
        }
    }
    return 0;
}