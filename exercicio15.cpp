// Declare um array de caracteres frase com 20 posições. 
// Leia uma frase do usuário usando cin e armazene-a em frase. 
// Substitua todas as vogais da frase por '*'. 
// Imprima a frase com as vogais substituídas usando cout.

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string frase = "";
    char vogais[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int len = frase.size(), lenV = sizeof(vogais) / sizeof(vogais[0]);

    cout << len << endl; 
    cout << lenV << endl;
    cout << "Insira uma pequena frase: ";
    getline(cin, frase);
    len = size(frase) / sizeof(frase[0]);
    cout << len << endl;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < lenV; j++){
            if(frase[i] == vogais[j]){
                frase[i] = '*';
            }
        }
        cout << frase[i] << endl;
    } 
    cout << "A frase inserida foi modificada: " + frase << endl;
    return 0;
}