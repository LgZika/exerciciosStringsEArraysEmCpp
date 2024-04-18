// Declare um array de caracteres nomes com 10 posições e um array de inteiros idades com 10 posições. 
// Leia os nomes e idades de 10 pessoas usando cin e armazene-os nos arrays. 
// Imprima a lista de nomes e idades em colunas usando cout.

#include <iostream>

using namespace std;

void lerDados(){
    cout << nomes << endl;

}

void imprimeDados(){



}

int main(){
    string nomes[1];
    int idades[1];
    int lenNomes = sizeof(nomes) / sizeof(nomes[0]);
    int lenIdades = sizeof(idades) / sizeof(idades[0]);

    lerDados();
    imprimeDados();

    return 0;
}