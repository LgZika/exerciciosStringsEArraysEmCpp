// Declare um array de caracteres texto com 50 posições. 
// Leia um texto do usuário usando cin e armazene-o em texto. 
// Conte o número de palavras no texto e imprima o resultado usando cout.

#include <iostream>

using namespace std;

void lerDados(char *texto){
    cout << "Entre com uma frase: ";
    cin.getline(texto, 50);
}

void imprimeDados(char *texto, int lenVetor){
    int x = 0;
    cout << endl;

    for(int i = 0; i < lenVetor; i++){
        if(texto[i] == ' '){
            x++;
        }
    }  
    cout << "A frase: \"" << texto << "\" possui " << x << " palavras!" << endl;
} 

int main(){
    char texto[50];
    int lenVetor = sizeof(texto) / sizeof(texto[0]);

    lerDados(texto);
    imprimeDados(texto, lenVetor);

    return 0;
}