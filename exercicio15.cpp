// Declare um array de caracteres frase com 20 posições. 
// Leia uma frase do usuário usando cin e armazene-a em frase. 
// Substitua todas as vogais da frase por '*'. 
// Imprima a frase com as vogais substituídas usando cout.

#include <iostream>

using namespace std;

int main(){
    string frase;
    char vogais[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int len; 
    int lenV = sizeof(vogais) / sizeof(vogais[0]); // mecanismo de sizeof para pegar o tamanho fo vetor

    cout << "Insira uma pequena frase: ";
    getline(cin, frase);
    len = frase.size(); // funcao size para pegar o tamanho de uma String
    
    for(int i = 0; i < len; i++){
        for(int j = 0; j < lenV; j++){
            if(frase[i] == vogais[j]){
                frase[i] = '*';
            }
        }
    } 
    cout << "A frase inserida foi modificada: " + frase << endl;
    return 0;
}