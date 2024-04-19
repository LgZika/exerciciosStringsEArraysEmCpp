// Declare um array de caracteres frase com 20 posições. 
// Leia uma frase do usuário usando cin e armazene-a em frase. 
// Encontre a palavra mais longa da frase e imprima a palavra usando cout.

#include <iostream>
#include <cstring>

using namespace std;

void lerDados(char *frase){
    cout << "Insira uma pequena frase: ";
    cin.getline(frase, 20);
}

void imprimeDados(char *frase, int lenVetor){
    char palavraAtual[20];
    char maiorPalavra[20];
    cout << endl;

    for(int i = 0; i < lenVetor; i++){
        palavraAtual[i] = frase[i];
        if(frase[i] == ' '){
            strcpy(maiorPalavra,palavraAtual);
            palavraAtual.clear();
        }
    }  
    cout << "A frase: \"" << frase << "\" possui " << x << " palavras!" << endl;
} 

int main(){
    char frase[20];
    int lenVetor = sizeof(frase) / sizeof(frase[0]);

    lerDados(frase);
    imprimeDados(frase, lenVetor);

    return 0;
}