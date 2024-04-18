// Declare um array de caracteres nomes com 10 posições e um array de inteiros idades com 10 posições. 
// Leia os nomes e idades de 10 pessoas usando cin e armazene-os nos arrays. 
// Imprima a lista de nomes e idades em colunas usando cout.

#include <iostream>

using namespace std;

void lerDados(string *nomes, int *idades, int lenVetor){
    cout << "Preencha os dados no formato 'Nome,Idade'" << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << ": ";
        getline(cin, nomes[i], ',');
        cin >> idades[i];
        cin.ignore();
    }
}

void imprimeDados(string *nomes, int *idades, int lenVetor){
    cout << endl;
    cout << "Exibindo dados armazenados..." << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << " - " << nomes[i] << " - " << idades[i] << " anos" << endl;
    }
}

int main(){
    string nomes[10];
    int idades[10];
    int lenVetor = sizeof(nomes) / sizeof(nomes[0]);

    lerDados(nomes, idades, lenVetor);
    imprimeDados(nomes, idades, lenVetor);

    return 0;
}