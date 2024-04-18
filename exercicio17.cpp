// Declare um array de caracteres produtos com 20 posições e um array de floats precos com 20 posições. 
// Leia os nomes e preços de 10 (?) produtos usando cin e armazene-os nos arrays. 
// Imprima a lista de produtos e preços em colunas 

#include <iostream>

using namespace std;

void lerDados(string *produtos, float *valorProduto, int lenVetor){
    cout << "Preencha os dados no formato 'Produto,Preco'" << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << ": ";
        getline(cin, produtos[i], ',');
        cin >> valorProduto[i];
        cin.ignore();
    }
}

void imprimeDados(string *produtos, float *valorProduto, int lenVetor){
    cout << endl;
    cout << "Exibindo dados armazenados..." << endl;
    for(int i = 0; i < lenVetor; i++){
        cout << "ID " << i << " - " << produtos[i];
        int tam = 20 - (produtos[i].size());
        for(tam; tam > 0; tam--){
            cout << " ";
        } 
        cout << "- R$ " << valorProduto[i] << endl;
    }
}

int main(){
    string produtos[5];
    float valorProduto[5];
    int lenVetor = sizeof(produtos) / sizeof(produtos[0]);

    lerDados(produtos, valorProduto, lenVetor);
    imprimeDados(produtos, valorProduto, lenVetor);

    return 0;
}