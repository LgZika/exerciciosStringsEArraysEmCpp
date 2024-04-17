// Declare um array de caracteres vogais com 5 posições. Insira manualmente as vogais ('a', 'e', 'i', 'o', 'u') nas posições do array. 
// Imprima cada vogal em uma linha usando cout.

#include <iostream>

using namespace std;

int main(){
    char vogais[5];
    int len = sizeof(vogais) / sizeof(vogais[0]);

    cout << "Insira as vogais no array:" << endl;
    for(int i = 0; i < len; i++){
        cout << "Posicao " << i << ": ";
        cin >> vogais[i];
    }
    cout << endl;
    for(int i = 0; i < len; i++){
        cout << "Posicao " << i << ": " << vogais[i] << endl;
    }
    return 0;
}