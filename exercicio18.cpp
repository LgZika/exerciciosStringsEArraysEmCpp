// Declare um array de caracteres cidades com 15 posições. 
// Leia os nomes de 15 cidades do usuário usando cin e armazene-as no array. 
// Ordene as cidades em ordem alfabética e imprima a lista ordenada usando cout.

#include <iostream>

using namespace std;

void lerDados(string *cidades, int lenVetor){
    cout << "Entre com nomes de cidades: " << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "pos " << i << " ";
        getline(cin, cidades[i]);
        //cin.ignore();
    }
}

void organizaDados(string *cidades, int lenVetor){
    string cidadesTemporaria = " ";
    for(int i = 0; i < lenVetor; i++){
        for(int j = 0; j < lenVetor; j++){
            if(cidades[i].compare(cidades[j]) < 0){ //verifica se a proxima seção do vetor é menor em ordem alfabetica (A<B<C...<Z)
                cidadesTemporaria = cidades[i];
                cidades[i] = cidades[j];
                cidades[j] = cidadesTemporaria;
            }
        }
    }
}

void imprimeDados(string *cidades, int lenVetor){
    cout << endl;
    cout << "Exibindo cidades em ordem:" << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "pos " << i << " " << cidades[i] << endl;
    }
}

int main(){
    string cidades[15]; //= {"Sao Paulo", "Rio de Janeiro", "Brasilia", "Fortaleza", "Salvador", "Belo Horizonte", "Manaus","Curitiba", "Recife", "Goiania", "Porto Alegre", "Belem", "Guarulhos", "Campinas", "Sao Luis"};
    int lenVetor = sizeof(cidades) / sizeof(cidades[0]);

    lerDados(cidades, lenVetor);
    organizaDados(cidades, lenVetor);
    imprimeDados(cidades, lenVetor);

    return 0;
}