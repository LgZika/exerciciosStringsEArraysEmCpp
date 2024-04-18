// Declare um array de caracteres dias com 7 posições. 
// Armazene manualmente os nomes dos 7 dias da semana nas posições do array. 
// Leia um número do usuário entre 1 e 7 usando cin. 
// Imprima o dia da semana que está na posição informada pelo usuário usando cout.

#include <iostream>

using namespace std;

int main(){
    string dias[7]; 
    int len = sizeof(dias) /sizeof(dias[0]); // esse macete dos sizeoff só funciona se o array (vetor) de string tiver seu tamanho especificado KKKKK,                                
    int indice;                              // se não retorna o tamanho do ponteiro que aponta para o buffer da string.
    cout << len << endl;
    cout << "Preencha o Array com os dias da semana:" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao "<< i << ": "; 
        cin >> dias[i];
    }
    cout << "Entre com o indice: ";
    cin >> indice;
    cout << endl;
    cout << "O dia Selecionado eh: " << dias[indice] << endl;
    return 0;
}