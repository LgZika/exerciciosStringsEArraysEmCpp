// Declare um array de caracteres cores com 7 posições. 
// Armazene manualmente os nomes de 7 cores nas posições do array. 
// Leia um número do usuário entre 1 e 7 usando cin. 
// Imprima a cor que está na posição informada pelo usuário usando cout.

#include <iostream>

using namespace std;

int main(){
    string cores[7];
    int len = sizeof(cores) /sizeof(cores[0]);
    int posicao;

    cout << "Preencha o Array com nomes de cores:" << endl;
    for(int i =0; i < len; i++){
        cout << "Posicao "<< i << ": "; 
        cin >> cores[i];
    }
    cout << "Pesquisa por cor na posicao: ";
    cin >> posicao;
    cout << "Cor armazenada na posicao " << posicao << ": " << cores[posicao] << endl;

    return 0;
}